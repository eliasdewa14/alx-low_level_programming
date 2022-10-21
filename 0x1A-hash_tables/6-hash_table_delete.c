#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: the hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head = NULL;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		if (head)
		{
			hash_del(head);
		}
	}
	free(ht->array);
	free(ht);
}

/**
 * hash_del - function to delete the linked list
 * @head: node of hash table
 *
 */
void hash_del(hash_node_t *head)
{
	if (head->next)
		hash_del(head->next);
	free(head->key);
	free(head->value);
	free(head);
}
