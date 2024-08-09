#include "main.h"

/**
* get_bit - get the bits of a number
* @n: the number to get its bits
* @index: index of the bit
*
* Return: returns the bit at the index.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int length = sizeof(unsigned long int) * 8;

	if (index >= length)
		return (-1);

	return ((n >> index) & 1);
}
