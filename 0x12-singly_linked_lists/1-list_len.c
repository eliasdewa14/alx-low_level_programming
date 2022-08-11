#include "lists.h"

/**
 * list_len - print the number of elements in a linked list
 * @h: pointer to head of linked list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
