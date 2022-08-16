#include "lists.h"

/**
 * get_nodeint_at_index - function that print the nth node of a listint_t list
 * @head: pointer to pointer of list
 * @index: index of node
 *
 * Return: nth node of a list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
