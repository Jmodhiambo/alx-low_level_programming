#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
* list_len - prints the number of elements in a list.
* @h: pointer to the head of the list.
*
* Return: returns the number of nodes or elements
*/

size_t list_len(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
