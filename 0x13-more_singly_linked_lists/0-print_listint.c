#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print a linkd list
 * @h: pointer to head of list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int n = 0;

	while (h)
	{
		printf("%u\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
