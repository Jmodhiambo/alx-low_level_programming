#include "search_algos.h"
#include <stdio.h>

/**
 * linear_skip - Searches for a value in a sorted skip list using express lane.
 * @list: Pointer to the head of the skip list.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL if not found.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *prev, *current;

    if (!list)
        return (NULL);

    prev = list;
    current = list->express;

    /* Traverse express lane first */
    while (current)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

        if (current->n >= value)
            break;

        prev = current;
        current = current->express;
    }

    /* Identify block where value might exist */
    if (!current)
    {
        current = prev;
        while (current->next)
            current = current->next;
    }

    printf("Value found between indexes [%lu] and [%lu]\n",
           prev->index, current->index);

    /* Linear search within the identified block */
    while (prev && prev->index <= current->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);

        if (prev->n == value)
            return (prev);

        prev = prev->next;
    }

    return (NULL);
}
