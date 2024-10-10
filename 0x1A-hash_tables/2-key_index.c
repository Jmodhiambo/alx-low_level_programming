#include "hash_tables.h"

/**
* key_index - Gets the hash code of the string
* @key: The key, string
* @size: Size of the array
*
* Return: Returns the hash code of the string
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2((unsigned char *)key);

	return (hash % size);

}
