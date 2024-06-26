#include <stdio.h>

/**
* main - Entry point.
*
* Descripition: Printing the first 50 fibonacci numbers starting with 1 & 2.
* Return: Always 0 when successful.
*/

int main(void)
{
	long long int count, sum = 0;
	long long int n1 = 1, n2 = 2;

	sum = n1 + n2;
	printf("%lld, %lld, ", n1, n2);

	for (count = 0; count <= 48; count++)
	{
		sum = n1 + n2;
		printf("%lld", sum);

		if (count != 48)
			printf(", ");

		n1 = n2;
		n2 = sum;
	}
	printf("\n");

	return (0);

}
