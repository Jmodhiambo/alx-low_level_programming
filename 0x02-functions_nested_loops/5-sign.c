#include "main.h"

/**
* print_sign - Prints sign and a value
* @n: This is the value associated in this function
*
* Return: 1 when greater than 0, 0 when 0 and -1 when less than 0.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
