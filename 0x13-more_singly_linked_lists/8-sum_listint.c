#include "lists.h"
#include <stdio.h>

/**
* sum_listint - sums all the data in the listint
* @head: a pointer to the head of the list.
*
* Return: returns the sum of the data in the listint.
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
