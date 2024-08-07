#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_listint_safe - prints a listint_t linked list, safely.
* @head: pointer to the head of the list.
*
* Return: the number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t **visited;
	size_t count = 0;
	size_t i;

	visited = malloc(sizeof(*visited) * 1024);
	if (visited == NULL)
		exit(98);

	while (current != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (current == visited[i])
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				free(visited);
				return (count);
			}
		}
		printf("[%p] %d\n", (void *)current, current->n);
		visited[count] = current;
		count++;
		current = current->next;
	}

	free(visited);
	return (count);
}
