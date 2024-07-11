#include "main.h"

/**
* _sqrt_recursion - calls multi_function
* @n: the square root
*
* Return: returns square root of n.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (multi_function(n, 1));
}

/**
* multi_function - finds if n has a square root of not.
* @n: The number.
* @i: the square number.
*
* Return: square root and -1 if not.
*/

int multi_function(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (multi_function(n, i + 1));

}
