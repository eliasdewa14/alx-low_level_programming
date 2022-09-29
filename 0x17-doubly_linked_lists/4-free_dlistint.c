#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: pointer to head of list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
		free_dlistint(head->next);
	free(head);
}
