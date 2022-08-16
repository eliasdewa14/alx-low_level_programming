#include "lists.h"
#include <stdio.h>

/**
 * listint_len - print the number of elements in linked list
 * @h: pointer to head of list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
