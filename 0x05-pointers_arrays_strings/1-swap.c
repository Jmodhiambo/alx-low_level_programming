#include "main.h"

/**
* swap_int - swaps the value of two numbers.
*
* @a: The first number
* @b: The second number
*/

void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
