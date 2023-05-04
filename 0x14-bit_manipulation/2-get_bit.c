#include "main.h"

/**
 * returns the value of a bit at a given index
 *
 * returns '-1'in case of a error
 */

int get_bit(unsigned long int n, unsigned int index){
	if (index >= (sizeof(unsigned long int)* 8)){
		return -1;

	}
	return(n >> index)&1;
}
