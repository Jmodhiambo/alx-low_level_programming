#include "main.h"

/**
* reverse_array - reverses an array of integers.
* @a: The array of integers.
* @n: The numbers of integers in the array.
*
* Return: Return the reversed array.
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}

}
