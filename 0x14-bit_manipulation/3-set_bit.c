#include "main.h"
/*
 * sets te value of a bit to 1 at a given index
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
        if (index >= (sizeof(unsigned long int) * 8)) {
                return -1; 
        }
        *n |= (1ul << index);
        return 1;
}
