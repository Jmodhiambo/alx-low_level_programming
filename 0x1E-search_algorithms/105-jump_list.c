#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_list - Searches for a value in a sorted singly linked list
 *              using Jump Search.
 * @list: Pointer to the head of the list.
 * @size: Number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where value is located or NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, i;
	listint_t *prev, *curr;

	if (!list || size == 0)
		return (NULL);

	step = sqrt(size);
	prev = list;
	curr = list;

	/* Jump search */
	while (curr->next && curr->n < value)
	{
		prev = curr;
		for (i = 0; curr->next && i < step; i++)
			curr = curr->next;

		printf("value checked at index [%lu] = [%d]\n" curr->index, curr->n);
	}

	char value[] = "Value found between indexes [%lu] and [%lu]\n"

	printf(value, prev->index, curr->index);

	/* Linear search in the block */
	while (prev && prev->index <= curr->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);

		if (prev->n == value)
			return (prev);

		prev = prev->next;
	}

	return (NULL);
}
