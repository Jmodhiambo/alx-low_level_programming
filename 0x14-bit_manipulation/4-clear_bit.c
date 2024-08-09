#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: pointer to the number
* @index: the index of the bit, starting from 0
*
* Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_length = sizeof(unsigned long int) * 8;

	if (index >= bit_length)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
