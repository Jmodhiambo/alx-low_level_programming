#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
* array_iterator - prints elements of the array
* @array: an array on integer elements
* @size: size of the array
* @action: a pointer to a function that prints array elements
*
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}

	}

}
