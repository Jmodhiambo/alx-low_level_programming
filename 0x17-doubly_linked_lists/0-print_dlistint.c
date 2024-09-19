#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_dlistint - prints the elements of dlistint list
* @h: pointer to the head of the dlistint
*
* Return: the elements of the list
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	int count = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}

	return (count);
}
