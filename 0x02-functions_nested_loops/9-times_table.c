#include "main.h"

/**
* times_table - Prints the 9 times table, starting with 0.
*
* Description: This function prints the 9 times table, from 0 to 9.
* Each row corresponds to a number multiplied by values from 0 to 9,
* with proper formatting for alignment.
*/

void times_table(void)
{
	int row, col, result;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			result = row * col;

			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
				{
					_putchar(' ');
				}
			}

			if (result < 10)
			{
				_putchar(result + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

