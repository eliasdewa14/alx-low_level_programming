#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *head = NULL, *node = NULL;

	if (!ht || !value || !key || strcmp(key, "") == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	head = ht->array[index];
	if (key)
	{
		while (head)
		{
			if (strcmp(head->key, key) == 0)
			{
				free(head->value);
				head->value = strdup(value);
				return (1);
			}
			head = head->next;
		}
	}
	head = ht->array[index];
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	if (head)
	{
		node->next = head;
		ht->array[index] = node;
		return (1);
	}
	ht->array[index] = node;
	return (1);
}
