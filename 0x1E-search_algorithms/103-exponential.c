#include "search_algos.h"
#include <stdio.h>

int bin_search(int *array, size_t low, size_t high, int value);
/**
 * exponential_search - Searches a value in array using exponential search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where value is locate:d, or -1 if missing or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t low = 1, high;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	while (low < size && array[low] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);

		low *= 2;
	}

	/* Define high index for binary search */
	high = (low < size) ? low : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", low / 2, high);

	/* Perform binary search and return result */
	return (bin_search(array, low / 2, high, value));
}

/**
 * bin_search - Searches for a value in a sorted array using Binary Search
 * @array: Pointer to the first element of the array
 * @low: The starting indes to search from in the array
 * @high: The last index to search from in the array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if missing or array is NULL
 */
int bin_search(int *array, size_t low, size_t high, int value)
{
	size_t i, mid;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}

		mid = (low + high) / 2;

		/* Check if mid is the target value */
		if (array[mid] == value)
		{
			return (mid);
		}

		/* If value is greater, ignore the left half */
		if (array[mid] < value)
			low = mid + 1;

		/* If value is smaller, ignore the right half */
		else
			high = mid - 1;
	}

	return (-1);
}
