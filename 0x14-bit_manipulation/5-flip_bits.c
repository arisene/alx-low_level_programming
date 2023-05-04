#include "main.h"

/**
 * returns a number of bits you would need to flip to get from one nmb to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
        unsigned long int xor_result = n ^ m;
        unsigned int count = 0;
        while (xor_result) {
                count += xor_result & 1;
                xor_result >>= 1;
        }
        return count;
}
