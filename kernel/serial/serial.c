#include "serial.h"
#include "../pic/pic.h"
#include "../asm/asm.h"
#include "../interrupt/trap.h"
#include "../vga/vga.h"
#include "../keyboard/keyboard.h"
#include "../apic/apic.h"
struct consle cons;

static char serial_exists = 0;
extern char shell_input; //shell输入字符
/* stupid I/O delay routine necessitated by historical PC design flaws */
void delay(void) 
{
    inb(0x84);
    inb(0x84);
    inb(0x84);
    inb(0x84);
}

void serial_init(void) {

    // Turn off the FIFO
    outb(COM1 + COM_FCR, 0);

    // Set speed; requires DLAB latch
    outb(COM1 + COM_LCR, COM_LCR_DLAB);
    outb(COM1 + COM_DLL, (unsigned char) (115200 / 9600));
    outb(COM1 + COM_DLM, 0);

    // 8 data bits, 1 stop bit, parity off; turn off DLAB latch
    outb(COM1 + COM_LCR, COM_LCR_WLEN8 & ~COM_LCR_DLAB);

    // No modem controls
    outb(COM1 + COM_MCR, 0);
    // Enable rcv interrupts
    outb(COM1 + COM_IER, COM_IER_RDI);

    // Clear any preexisting overrun indications and interrupts
    // Serial port doesn't exist if COM_LSR returns 0xFF
    serial_exists = (inb(COM1 + COM_LSR) != 0xFF);
    (void) inb(COM1+COM_IIR);
    (void) inb(COM1+COM_RX);

    if (serial_exists) {
        printk("serial exist!\n");
        pic_enable(IRQ_COM1);
        //enable_irq(IRQ_COM1,0);
    }
}
void lpt_putc_sub(int c) {
    int i;
    for (i = 0; !(inb(LPTPORT + 1) & 0x80) && i < 12800; i ++) {
        delay();
    }
    outb(LPTPORT + 0, c);
    outb(LPTPORT + 2, 0x08 | 0x04 | 0x01);
    outb(LPTPORT + 2, 0x08);
}

/* lpt_putc - copy console output to parallel port */
void lpt_putc(int c) {
    if (c != '\b') {
        lpt_putc_sub(c);
    }
    else {
        lpt_putc_sub('\b');
        lpt_putc_sub(' ');
        lpt_putc_sub('\b');
    }
}


/* *
 * cons_intr - called by device interrupt routines to feed input
 * characters into the circular console input buffer.
 * */
void cons_intr(int (*proc)(void)) {
    int c;
    while ((c = (*proc)()) != -1) {
        if (c != 0) {
            cons.buf[cons.wpos ++] = c;
            shell_input= c;
            if (cons.wpos == CONSBUFSIZE) {
                cons.wpos = 0;
            }
        }
    }
}

/* serial_proc_data - get data from serial port */
int serial_proc_data(void) {
    if (!(inb(COM1 + COM_LSR) & COM_LSR_DATA)) {
        return -1;
    }
    int c = inb(COM1 + COM_RX);
    if (c == 127) {
        c = '\b';
    }
    return c;
}

/* serial_intr - try to feed input characters from serial port */
void serial_intr(void) {
    if (serial_exists) {
        cons_intr(serial_proc_data);
    }
}

void serial_putc_sub(int c) {
    int i;
    for (i = 0; !(inb(COM1 + COM_LSR) & COM_LSR_TXRDY) && i < 12800; i ++) {
        delay();
    }
    outb(COM1 + COM_TX, c);
}

/* serial_putc - print character to serial port */
void serial_putc(int c) {
    if (c != '\b') {
        serial_putc_sub(c);
    }
    else {
        serial_putc_sub('\b');
        serial_putc_sub(' ');
        serial_putc_sub('\b');
    }
}


