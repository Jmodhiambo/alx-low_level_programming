#include "main.h"

/**
* flip_bits - counts the number of bits needed to flip to get from one number
* to another
* @n: the first number
* @m: the second number
*
* Return: the number of bits that need to be flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int flip_count = 0;

	while (xor_result)
	{
		flip_count += xor_result & 1;
		xor_result >>= 1;
	}

	return flip_count;
}
