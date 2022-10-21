#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = 0;
	hash_node_t *head = NULL;
	if (!ht || !key)
	       return (NULL);
	index = key_index((unsigned char *)key,ht->size);
	head = ht->array[index];
	if (head)
	{
		while (head->next && head->key != key)
			head = head->next;
		return (head->value);
	}
	return (NULL);
}
