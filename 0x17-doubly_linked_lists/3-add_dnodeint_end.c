#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: double pointer to head
 * @n: data to add at the end of node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	if (head == NULL || *head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		new_node->prev = temp;
		temp->next = new_node;
		return (new_node);
	}
	return (NULL);
}
