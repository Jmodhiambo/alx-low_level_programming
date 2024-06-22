#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of numbers.
 * Numbers range from 0 to 99, are printed with two
 * combinations are separated by a comma followed by a space.
 * The combination of numbers is printed in ascending order.
 * 00 01 and 01 00 are considered the same combination.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

