#ifndef _HASH_H_
#define _HASH_H_

/* 2^31 + 2^29 - 2^25 + 2^22 - 2^19 - 2^16 + 1 */
//Knuth 建议把这个参数取到最接近 2^32 黄金分割的素数，然后就有这个 Magic Number 了。
#define GOLDEN_RATIO_PRIME_32       0x9e370001UL

/* *
 * hash32 - generate a hash value in the range [0, 2^@bits - 1]
 * @val:    the input value
 * @bits:   the number of bits in a return value
 *
 * High bits are more random, so we use them.
 * */
static unsigned int
hash32(unsigned int val, unsigned int bits) {
    unsigned int hash = val * GOLDEN_RATIO_PRIME_32;
    return (hash >> (32 - bits));
}

#endif