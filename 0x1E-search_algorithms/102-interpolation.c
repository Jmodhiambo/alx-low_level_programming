#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - Searches a value in array using Interpolation search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if missing or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array == NULL || size == 0)
		return (-1);

	while (low < high && array[low] <= value && array[high] >= value)
	{
		/* Prevent division by zero */
		if (array[high] == array[low])
			break;

		pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] > value)
			high = pos - 1;
		else if (array[pos] < value)
			low = pos + 1;
		else
			return (pos);
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
