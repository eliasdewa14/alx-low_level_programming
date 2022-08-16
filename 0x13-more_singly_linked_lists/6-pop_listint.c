#include "lists.h"

/**
 * pop_listint -  function that deletes the head node of a listint_t list
 * @head: pointer to pointer of list
 *
 * Return: the head node’s data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head)
		return (0);
	temp = *head;
	n = (*head)->n;
	(*head) = (*head)->next;
	free(temp);
	return (n);
}
