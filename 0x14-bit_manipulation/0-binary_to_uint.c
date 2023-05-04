#include "main.h"
#include <stddef.h>

/**
 * Function that converts binary nmb into unsigned int 
 *
 * in case of any invalid input the out put is 0
 *
 */

unsigned int binary_to_uint(const char *b){
	unsigned int result = 0;


	if (b == NULL){
		return 0;
	}

	
	for(; *b !='\0';b++){
		if(*b != '0' && *b != '1'){
			return 0;
		}
		result <<=1;
		result+=(*b - '0');
	}

	return result;
}
