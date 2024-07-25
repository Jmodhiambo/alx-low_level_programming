#include <stdlib.h>
#include "function_pointers.h"

/**
* int_index - searches for an integer with a matching condition.
* @array: the array of integers
* @size: size of the array
* @cmp: a pointer to a function array that compares integers
*
* Return: index of the first matching array if successful.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);			
		}


	}

	return (-1);
}
