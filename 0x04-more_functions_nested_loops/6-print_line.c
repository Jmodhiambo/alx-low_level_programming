#include "main.h"

/**
* print_line - Prints the underscore to make a line.
* @n: The number of underscores to be printed.
*/

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');

}
