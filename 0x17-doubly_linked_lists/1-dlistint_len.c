#include "lists.h"

/**
 * dlistint_len - function that returns number of elements in a linked list
 * @h: head of a list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);
	while (h->prev)
		h = h->prev;
	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
