#include <stdio.h>

/**
* main - Enrty point
* Description: Sums multiples of 3 and 5 from 0 to 1023.
*
* Return: Always 0 when successful
*/

int main(void)
{
	int num, sum = 0;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum = sum + num;
		}
	}
	printf("%d\n", sum);

	return (0);
}
