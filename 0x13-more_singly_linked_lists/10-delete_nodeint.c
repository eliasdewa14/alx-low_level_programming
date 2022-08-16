#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index of a list
 * @head: a pointer to pointer of list
 * @index: index of a node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *del_node, *temp;

	if (*head == NULL)
		return (-1);
	temp = *head;

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (i < index)
		{
			temp = temp->next;
			i++;
		}
		del_node = temp;
		del_node = del_node->next;
		temp->next = del_node->next;
		free(del_node);
	}
	return (1);
}
