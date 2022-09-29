#include "lists.h"

/**
 * sum_dlistint -  function that returns the sum of all the data of a list
 * @head: pointer to head list
 * 
 * Return: sum, otherwise 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	if (head)
		return (head->n + sum_dlistint(head->next));
	return (0);
}
