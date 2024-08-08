#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list safely (handles loops)
 * @h: double pointer to the head of the list
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	listint_t **visited;
	size_t count = 0;
	size_t i;

	if (h == NULL || *h == NULL)
		return (0);

	visited = malloc(sizeof(*visited) * 1024);
	if (visited == NULL)
		exit(98);

	current = *h;
	while (current != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (current == visited[i])
			{
				*h = NULL;
				free(visited);
				return (count);
			}
		}
		visited[count] = current;
		count++;
		current = current->next;
		free(visited[count - 1]);
	}

	*h = NULL;
	free(visited);
	return (count);
}
