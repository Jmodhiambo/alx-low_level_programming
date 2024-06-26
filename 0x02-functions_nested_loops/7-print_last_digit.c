#include "main.h"
#include <stdio.h>

/**
* print_last_digit - prints the last digit of a number
* @x: The number to compute
*
* Return: return the last digit
*/

int print_last_digit(int x)
{
	int n = x % 10;

	if (n < 0)
		n = -n;

	_putchar(n + '0');

	return (n);
}
