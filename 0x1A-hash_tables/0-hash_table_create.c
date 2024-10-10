#include "hash_tables.h"
#include <stdlib.h>

/**
* hash_table_create - creates a hash table
* @size: size of the hash table
*
* Return: a pointer to a newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_size;

	hash_size = malloc(sizeof(size));
	if (hash_size == NULL)
		return (NULL);

	return (hash_size);
}
