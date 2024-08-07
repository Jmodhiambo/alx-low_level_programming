#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - inserts a new node at nth index.
* @head: double pointer to the head.
* @idx: index to insert the new node.
* @n: value of the new node.
*
* Return: returns address of the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *temp2;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}

	temp2 = *head;
	for (i = 0; temp2 != NULL && i < idx - 1; i++)
	{
		temp2 = temp2->next;
	}

	if (temp2 == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->next = temp2->next;
	temp2->next = temp;

	return (temp);
}
