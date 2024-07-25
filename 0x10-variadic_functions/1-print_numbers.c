#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_numbers - print numbers passed in a parameters.
* @separator: separates the numbers printed.
* @n: the number of variables passed to the function.
*
* Return: Returns a list of numbers separated by separator.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");

}
