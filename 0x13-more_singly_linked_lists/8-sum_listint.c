#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data of a list
 * @head: pointer to pointer of list
 *
 * Return: sum of the data
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
