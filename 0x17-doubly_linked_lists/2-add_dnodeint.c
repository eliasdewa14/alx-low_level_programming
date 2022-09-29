#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head: pointer to list head
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if(new_node == NULL)
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
		temp->prev = new_node;
		*head = new_node;
		new_node->next = temp;
		return (new_node);
	}
	return (NULL);
}
