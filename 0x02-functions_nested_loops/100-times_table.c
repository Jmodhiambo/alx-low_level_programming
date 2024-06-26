#include "main.h"

/**
* print_times_table - Prints the n times table, starting with 0.
* @n: The number defining the times table to print (0 <= n <= 15).
*/
void print_times_table(int n)
{
	int row, col, result;

	if (n > 15 || n < 0)
		return;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			result = row * col;
			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
					_putchar(' ');

				if (result < 100)
					_putchar(' ');
			}
			print_number(result);
		}
		_putchar('\n');
	}
}

/**
* print_number - Prints an integer number using _putchar.
* @num: The number to print.
*/
void print_number(int num)
{
	if (num < 10)
	{
		_putchar(num + '0');
	}
	else if (num < 100)
	{
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
	}
	else
	{
		_putchar((num / 100) + '0');
		_putchar(((num / 10) % 10) + '0');
		_putchar((num % 10) + '0');
	}
}
