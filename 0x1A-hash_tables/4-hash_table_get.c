#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table to look into.
 * @key: The key you are looking for.
 *
 * Return: The value associated with the element,
 * or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *node;

	/* Check if hash table and key are valid */
	if (ht == NULL || key == NULL || strlen(key) == 0)
		return ("(null)");

	/* Calculate the index for the key */
	index = key_index((const unsigned char *)key, ht->size);

	/* Traverse the linked list at the calculated index */
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0) /* If key matches */
			return (node->value); /* Return the associated value */
		node = node->next; /* Move to the next node */
	}

	return ("(null)"); /* If key not found, return NULL */
}
