#include <stdio.h>
#include "main.h"

/**
* print_array - prints array elements followed by comma.
* @a: The array.
* @n: Number of elements in an array.
*/

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
