#include "main.h"

/**
* more_numbers - Prints numbers from 0 to 14.
*/

void more_numbers(void)
{
	int c;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
