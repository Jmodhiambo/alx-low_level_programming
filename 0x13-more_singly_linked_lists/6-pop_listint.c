#include "lists.h"
#include <stdio.h>

/**
* pop_listint - deletes the head node
* @head: a double pointer to the head of the node.
*
* Return: returns the head node's data
*/

int pop_listint(listint_t **head)
{
	listint_t *prev, *current;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	current = *head;

	if (current != NULL)
	{
		prev = current;
		current = current->next;
		data = prev->n;
		prev->next = NULL;
		free(prev);
		*head = current;
	}
	return (data);
}
