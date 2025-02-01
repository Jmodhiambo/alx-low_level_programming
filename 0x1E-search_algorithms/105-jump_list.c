#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_list - Searches for a value in a sorted singly linked list
 *             using Jump Search.
 * @list: Pointer to the head of the list.
 * @size: Number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where value is located or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_step, pos = 0, multiplier = 0;
	listint_t *block_start, *b;

	if (!list || size == 0)
		return (NULL);

	jump_step = (size_t)sqrt((double)size);

	/* Jumping phase */
	do {
		block_start = list;
		multiplier++;
		pos = multiplier * jump_step;

		while (list->next && list->index < pos)
			list = list->next;

		/* Adjust position if last node is reached */
		if (!list->next && pos != list->index)
			pos = list->index;

		printf("Value checked at index [%lu] = [%d]\n", pos, list->n);

	} while (pos < size && list->next && list->n < value);

	/* Print the range where value might be */
	b = block_start;
	printf("Value found between indexes [%lu] and [%lu]", b->index, list->index);
	printf("\n");

	/* Linear search within the identified block */
	while (block_start && block_start->index <= list->index)
	{
		b = block_start;
		printf("Value checked at index [%lu] = [%d]\n", b->index, b->n);
		if (block_start->n == value)
			return (block_start);
		block_start = block_start->next;
	}
	return (NULL);
}
