#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
* error_exit - Prints an error message and exits with status 98
*/
void error_exit(void)
{
	printf("Error\n");
	exit(98);
}

/**
* is_digit - Checks if a string contains only digits
* @s: The string to check
* Return: 1 if the string contains only digits, 0 otherwise
*/
int is_digit(char *s)
{
	while (*s)
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}

/**
* multiply - Multiplies two large numbers represented as strings
* @num1: The first number
* @num2: The second number
*/
void multiply(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int *result = calloc(len1 + len2, sizeof(int));
	int i, j, n1, n2, sum, carry;

	if (!result)
		error_exit();

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}
		result[i + j + 1] += carry;
	}

	i = 0;
	while (i < len1 + len2 && result[i] == 0)
		i++;

	if (i == len1 + len2)
		_putchar('0');
	else
	{
		while (i < len1 + len2)
			_putchar(result[i++] + '0');
	}

	_putchar('\n');
	free(result);
}

/**
* main - Entry point for the program
* @argc: The number of command-line arguments
* @argv: The array of command-line arguments
* Return: 0 on success, 98 on error
*/
int main(int argc, char *argv[])
{
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
		error_exit();

	multiply(argv[1], argv[2]);
	return (0);
}
