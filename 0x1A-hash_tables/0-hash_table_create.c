#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: the size of array
 *
 * Return: a pointer to the newly created hash table
 * If something went wrong, your function should return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned int i;

	hash = malloc(sizeof(hash_table_t));
	if (!hash)
		return (NULL);
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (!(hash->array))
		return (NULL);
	hash->size = size;
	for (i = 0; i < size; i++)
		hash->array[i] = NULL;
	return (hash);
}
