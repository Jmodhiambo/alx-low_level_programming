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
	size_t high = size - 1;
	size_t low = 0;
	size_t global_pos;  /* Make pos global */

	while ((low < high) && (array[low] <= value) && (array[high] >= value) &&
		 (global_pos < size))
	{
		size_t pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));

		global_pos = pos;

		if (array[pos] > value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			high = pos - 1;
		}

		else if (array[pos] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			low = pos + 1;
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			return (pos);
		}
	}
	printf("Value checked array[%ld] is out of range\n", global_pos);
	return (-1);
}
