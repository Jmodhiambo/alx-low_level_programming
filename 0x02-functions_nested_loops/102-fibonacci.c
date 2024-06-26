#include <stdio.h>

/**
* main - Entry point.
*
* Descripition: Printing the first 50 fibonacci numbers starting with 1 & 2.
* Return: Always 0 when successful.
*/

int main(void)
{
	int count, sum = 0;
	int n1 = 1, n2 = 2;

	sum = n1 + n2;
	printf("%d, %d, ", n1, n2);

	for (count = 0; count <= 48; count++)
	{
		sum = n1 + n2;
		printf("%d", sum);

		if (count != 48)
			printf(", ");

		n1 = n2;
		n2 = sum;
	}
	printf("\n");

	return (0);

}
