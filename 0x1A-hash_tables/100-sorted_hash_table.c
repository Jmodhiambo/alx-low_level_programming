#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shash_table_insert_sorted(shash_table_t *ht, shash_node_t *new_node,
				const char *key);

/**
* shash_table_create - creates a hash table
* @size: size of the hash table
*
* Return: a pointer to a newly created hash table
*/

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash_table;
	unsigned int i;

	shash_table = malloc(sizeof(shash_table_t));
	if (shash_table == NULL)
		return (NULL);

	shash_table->array = malloc(sizeof(shash_node_t *) * size);
	if (shash_table->array == NULL)
	{
		free(shash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		shash_table->array[i] = NULL;
	}
	shash_table->size = size;
	return (shash_table);
}

/**
* shash_table_set - Sets the node at the hash table.
* @ht: The table to update with a new node
* @key: The key of the new node
* @value: The value of the new node
*
* Return: 1 on success and 0 incase of otherwise
*/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *temp;
	unsigned int index;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->snext;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	/* Add the node to the hash table's linked list at the index */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	/* Now, insert the new node into the sorted linked list */
	shash_table_insert_sorted(ht, new_node, key);

	return (1);
}

/**
 * shash_table_insert_sorted - Inserts a node into the sorted linked list
 * @ht: The sorted hash table
 * @new_node: The new node to insert
 * @key: The key of the new node
 * Return: void
 */
void shash_table_insert_sorted(shash_table_t *ht, shash_node_t *new_node,
				const char *key)
{
	shash_node_t *temp, *prev = NULL;

	if (ht->shead == NULL)
	{
		new_node->snext = NULL; /* Code block: First element in the sorted list */
		new_node->sprev = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else
	{
		temp = ht->shead;
		/* Traverse the sorted list to find the correct position */
		while (temp != NULL && strcmp(temp->key, key) < 0)
		{
			prev = temp;
			temp = temp->snext;
		}
		if (prev == NULL)
		{
			new_node->snext = ht->shead;  /* Insert at the beginning of the list */
			new_node->sprev = NULL;
			ht->shead->sprev = new_node;
			ht->shead = new_node;
		}
		else if (temp == NULL)
		{
			new_node->snext = NULL; /* Insert at the end of the list */
			new_node->sprev = ht->stail;
			ht->stail->snext = new_node;
			ht->stail = new_node;
		}
		else
		{
			new_node->snext = temp; /* Insert in the middle of the list */
			new_node->sprev = prev;
			prev->snext = new_node;
			temp->sprev = new_node;
		}
	}
}
/**
* shash_table_get - Retrieves a value associated with a key.
* @ht: The hash table to look into.
* @key: The key you are looking for.
*
* Return: The value associated with the element,
*         or NULL if key couldn’t be found.
*/

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned int index;
	shash_node_t *node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return ("(null)");

	index = key_index((unsigned char *)key, ht->size);

	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return ("(null)");
}

/**
* shash_table_print - Prints the key-value pairs in a hash table.
* @ht: The hash table.
*
* Return: void.
*/

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");

	node = ht->shead;

	while (node != NULL)
	{
		if (!first)
			printf(", ");

		printf("'%s': '%s'", node->key, node->value);
		first = 0;

		node = node->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the key-value pairs in reverse.
 * @ht: The hash table.
 *
 * Return: void.
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");

	node = ht->stail;

	while (node != NULL)
	{
		if (!first)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		first = 0;

		node = node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a hash table.
 * @ht: The hash table.
 *
 * Return: void.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned int index = 0;
	shash_node_t *node, *temp;

	while (index < ht->size)
	{
		node = ht->array[index];

		while (node != NULL)
		{
			temp = node;
			node = node->next;

			free(temp->key);
			free(temp->value);
			free(temp);
		}

		index += 1;

	}
	free(ht->array);
	free(ht);
}
