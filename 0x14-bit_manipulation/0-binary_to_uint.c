#include "main.h"
#include <stdlib.h>

/**
* binary_to_uint - converts a binary to number.
* @b: the binary code to be converted.
*
* Return: returns a number or 0 is something failed.
*/
unsigned int binary_to_uint(const char *b)
{
	int num = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		num = num * 2 + (*b - '0');
		b++;
	}

	return (num);
}
