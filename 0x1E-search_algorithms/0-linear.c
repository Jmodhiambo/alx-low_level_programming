#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

/**
* linear_search -  Searches a value in an array of integers
* @array: Pointer to the first element in the array.
* @size: The size of the array
* @value: The value to search for in the array
*
* Return: The index of the value being searched for or -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);

	while (index < size)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);

		index++;
	}

	return (-1);
}
