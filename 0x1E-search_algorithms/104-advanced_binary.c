#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Prints the array being searched
 * @array: The array to print
 * @low: The lower bound index
 * @high: The upper bound index
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_recursive - Recursive binary search to find the first occurrence
 * @array: The array to search in
 * @low: The lower bound index
 * @high: The upper bound index
 * @value: The value to search for
 *
 * Return: The first occurrence index or -1
 */
int binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low > high)
		return (-1);

	print_array(array, low, high);
	mid = low + (high - low) / 2;

	if (array[mid] == value)
	{
		/* Check if it's the first occurrence */
		if (mid == low || array[mid - 1] != value)
			return (mid);
	}

	/* Search in the left subarray if value but not the first occurrence */
	if (array[mid] >= value)
		return (binary_recursive(array, low, mid, value));

	/* Otherwise, search in the right subarray */
	return (binary_recursive(array, mid + 1, high, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array
 *                   using Advanced Binary Search
 * @array: The array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (binary_recursive(array, 0, size - 1, value));
}
