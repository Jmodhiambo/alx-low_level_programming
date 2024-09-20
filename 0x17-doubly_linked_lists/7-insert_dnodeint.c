#include "lists.h"
#include <stdlib.h>

/**
* insert_dnodeint_at_index - inserts a node a given postion
* @h: double pointer to the head of the list
* @idx: the index to insert the new node
* @n: the value of the new node
*
* Return: returns a modified node.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h;
	unsigned int pos = 1; /* start from 1 as idx 0 is handled differentltly*/
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new->n = n;
		new->next = *h;
		new->prev = NULL;
		*h = new;

		return (new);
	}

	while (ptr)
	{
		if (pos == idx)
		{
			new->next = ptr->next;
			ptr->next = new;
			new->prev = ptr;
			new->n = n;

			return (new);
		}
		if (pos > idx)
		{
			return (NULL);
		}
		pos++;
		ptr = ptr->next;

	}

	return (NULL);
}
