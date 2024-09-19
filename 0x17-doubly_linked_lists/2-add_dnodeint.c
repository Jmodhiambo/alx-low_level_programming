#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint - adds a new node at beginning of a list
* @head: double pointer to the start of the list
* @n: value of the new node
*
* Return: returns a pointer to the new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new;

	}
	*head = new;

	return (new);
}
