#include "main.h"

/**
* set_bit - sets a bit at index to 1
* @n: pointer the number to get its bits
* @index: index of the bit
*
* Return: returns the changed binary number.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int length = sizeof(unsigned long int) * 8;

	if (index >= length)
		return (-1);

	*n = ((*n >> index) | 1);
	*n = (*n << index);

	return (*n);
}
