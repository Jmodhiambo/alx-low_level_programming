#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - Searches for a value in a sorted array using Binary Search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if missing or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid, i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i > low)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");

		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1); /* Value not found */
}
