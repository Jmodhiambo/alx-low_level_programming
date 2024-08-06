#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* listint_len - counts elements of a list.
* @h: pointer to the head of the list.
*
* Return: returns the number of nodes.
*/

size_t listint_len(const listint_t *h)
{
	int nodes = 0;

	while (h !=  NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
