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
    skiplist_t *express_lane, *block_start;

    if (!list)
        return (NULL);

    express_lane = list;

    /* Jumping phase using express lane */
    while (express_lane->express && express_lane->express->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n",
               express_lane->express->index, express_lane->express->n);
        express_lane = express_lane->express;
    }

    /* Define the start of the linear search */
    block_start = express_lane;
    if (express_lane->express)
    {
        express_lane = express_lane->express;
    }
    else
    {
        /* If no express lane left, go to the end of the list */
        while (express_lane->next)
            express_lane = express_lane->next;
    }

    printf("Value found between indexes [%lu] and [%lu]\n",
           block_start->index, express_lane->index);

    /* Linear search within the identified block */
    while (block_start && block_start->index <= express_lane->index)
    {
        printf("Value checked at index [%lu] = [%d]\n",
               block_start->index, block_start->n);

        if (block_start->n == value)
            return (block_start);
        block_start = block_start->next;
    }

    return (NULL);
}
