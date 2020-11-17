#include "ulib.h"

int user_main(void);

void
startmain(void) {
    int ret = user_main();
    exit(ret);
}

