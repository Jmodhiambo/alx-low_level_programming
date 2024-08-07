#include "lists.h"
#include <stdlib.h>

/**
* reverse_listint - reverses the listint
* @head: double pointer to the head of the list
*
* Return: returns a head pointer to the reversed list.
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = NULL;

	while (*head != NULL)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = current;
	}
	*head = prev;

	return (*head);
}
