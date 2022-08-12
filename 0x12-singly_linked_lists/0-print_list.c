#include "lists.h"
#include <stdio.h>

/**
 * print_list - print  a linkd list
 * @h: pointer to head of list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int n = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		n++;
	}
	return (n);
}
