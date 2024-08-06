#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_listint - prints elements of a list.
* @h: pointer to the head of the list.
*
* Return: returns the number of nodes.
*/

size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (h !=  NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
