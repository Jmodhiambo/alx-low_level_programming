#include <stdio.h>

/**
* main - Entry point of the program.
*
* Return: Always 0.
*/
int main(void)
{
	unsigned long n1 = 1, n2 = 2;
	unsigned long n1_half1, n1_half2, n2_half1, n2_half2;
	unsigned long half1, half2;
	int i;

	printf("%lu, %lu", n1, n2);

	for (i = 3; i <= 91; i++)
	{
		unsigned long next = n1 + n2;

		printf(", %lu", next);

		n1 = n2;
		n2 = next;
	}

	n1_half1 = n1 / 1000000000;
	n1_half2 = n1 % 1000000000;
	n2_half1 = n2 / 1000000000;
	n2_half2 = n2 % 1000000000;

	for (i = 92; i <= 98; i++)
	{
		half1 = n1_half1 + n2_half1;
		half2 = n1_half2 + n2_half2;
		if (half2 >= 1000000000)
		{
			half1++;
			half2 %= 1000000000;
		}
		printf(", %lu%09lu", half1, half2);
		n1_half1 = n2_half1;
		n1_half2 = n2_half2;
		n2_half1 = half1;
		n2_half2 = half2;
	}

	printf("\n");
	return (0);
}
