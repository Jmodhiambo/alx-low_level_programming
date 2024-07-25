#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - sums all its parameters
* @n: the number of parameters passed to the function.
*
* Return: Returns the sum of the arguments passed.
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
