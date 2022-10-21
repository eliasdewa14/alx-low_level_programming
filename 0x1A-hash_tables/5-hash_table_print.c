#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: the hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int j = 0;
	hash_node_t *head;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head)
		{
			if (j)
				printf(", ");
			printf("\'%s\': \'%s\'", head->key, head->value);
			head = head->next;
			j = 1;
		}
	}
	printf("}\n");
}
