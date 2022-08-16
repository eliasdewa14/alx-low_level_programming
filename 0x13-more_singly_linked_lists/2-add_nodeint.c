#include "lists.h"
#include <string.h>

/**
 * add_nodeint - a function that adds a new node at the beginning of a list
 * @head: pointer to a list pointer
 * @n: input integer
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));
	if (*head == NULL)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_node;

	return (*head);
}
