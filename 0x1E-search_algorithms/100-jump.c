#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array using Binary Search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if missing or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t low = 0, i;
	size_t high = jump;

	if (array == NULL || size == 0)
		return (-1);

	while (low < size)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);

		if (high < size && array[high] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", low, high);
			for (i = low; i <= high; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
			break;
		}

		if (high >= size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", low, high);
			for (i = low; i < size; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
			break;
		}

		low = high;
		high += jump;
	}

	return (-1);
}
