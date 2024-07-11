#include "main.h"

/**
* is_prime_number - finds prime numbers
* @n: the number to check if its a prime number or not.
*
* Return: 1 for prime and 0 for not prime numbers.
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime_helper(n, 2));
}

/**
* prime_helper - finds if n is a prime number.
* @n: The number
* @i: the multiplier.
*
* Return: 1 prime numbers and 0 for non prime numbers.
*/

int prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);

	if (n % i == 0)
		return (0);

	return (prime_helper(n, i + 1));
}
