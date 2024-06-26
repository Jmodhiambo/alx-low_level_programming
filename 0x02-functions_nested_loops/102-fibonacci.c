#include <stdio.h>

#define MAX_DIGITS 100

/**
* add_large_numbers - Adds two large numbers represented as arrays of digits.
* @result: The array to store the result of the addition.
* @a: The first number as an array of digits.
* @b: The second number as an array of digits.
*/
void add_large_numbers(int result[], int a[], int b[])
{
	int carry = 0;
	int i;

	for (i = MAX_DIGITS - 1; i >= 0; i--)
	{
		int sum = a[i] + b[i] + carry;

		result[i] = sum % 10;
		carry = sum / 10;
	}
}

/**
* print_large_number - Prints a large number represented as an array of digits.
* @num: The number to print as an array of digits.
* @print_comma: If non-zero, prints a comma and space after the number.
*/
void print_large_number(int num[], int print_comma)
{
	int leading_zero = 1;
	int i;

	for (i = 0; i < MAX_DIGITS; i++)
	{
		if (leading_zero && num[i] == 0)
		{
			continue;
		}
		leading_zero = 0;
		printf("%d", num[i]);
	}
	if (leading_zero)
	{
		printf("0");
	}
	if (print_comma)
	{
		printf(", ");
	}
	else
	{
	printf("\n");
	}
}

/**
* main - Entry point of the program.
*
* Return: Always 0.
*/
int main(void)
{
	int a[MAX_DIGITS] = {0};
	int b[MAX_DIGITS] = {0};
	int next[MAX_DIGITS] = {0};
	int i, j;

	a[MAX_DIGITS - 1] = 1;
	b[MAX_DIGITS - 1] = 2;

	print_large_number(a, 1);
	print_large_number(b, 1);

	for (i = 3; i <= 50; i++)
	{
		add_large_numbers(next, a, b);
		print_large_number(next, i < 50);

		for (j = 0; j < MAX_DIGITS; j++)
		{
			a[j] = b[j];
			b[j] = next[j];
		}
	}
	return (0);
}
