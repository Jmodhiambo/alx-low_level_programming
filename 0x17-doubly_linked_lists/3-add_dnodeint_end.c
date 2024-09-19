#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint_end - add a new node at the end of the list
* @head: double pointer to the head of the node
* @n: value of the new nod
*
* Return: a pointer to the new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = *head;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new;
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = new;
	new->n = n;
	new->prev = ptr;
	new->next = NULL;

	return (new);

}
