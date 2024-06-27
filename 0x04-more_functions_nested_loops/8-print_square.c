#include "main.h"

/**
* print_square - Prints a square.
* @size: The length of the square.
*/

void print_square(int size)
{
	int len, wid = 0;

	for (len = 0; len < size; len++)
	{
		for (wid = 0; wid < size; wid++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
