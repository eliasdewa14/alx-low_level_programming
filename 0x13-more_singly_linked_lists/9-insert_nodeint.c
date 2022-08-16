#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: pointer to pointer of a list
 * @idx: the index of list
 * @n: the new integer to be added
 *
 * Return: a list with new added data
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->n = n;
		return (new_node);
	}
	while (i < idx)
	{
		*head = (*head)->next;
		i++;
	}
	new_node->n = n;
	new_node->next = (*head)->next;
	(*head)->next = new_node;
	return (new_node);
}
