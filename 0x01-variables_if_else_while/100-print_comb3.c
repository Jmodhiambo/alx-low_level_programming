#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all unique combinations of two digits,
 *              treating "01" and "10" as the same combination.
 *              Combinations are printed in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (!(i == 8 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

