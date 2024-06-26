#include <stdio.h>

/**
* main - Entry point.
*
* Descripition: Printing the first 50 fibonacci numbers starting with 1 & 2.
* Return: Always 0 when successful.
*/

int main(void)
{
	int count, sum, sumEven = 0;
	int n1 = 1, n2 = 2;

	sum = n1 + n2;

	for (count = 0; count <= 48; count++)
	{
		sum = n1 + n2;

		if (sum > 4000000)
			break;
		if (sum % 2 == 0)
		{
			sumEven = sumEven + sum;
		}

		n1 = n2;
		n2 = sum;
	}
	printf("%d", sumEven);
	printf("\n");

	return (0);

}
