#include "lists.h"
#include <string.h>

/**
 * add_node_end - a function that adds a new node at the end of a list
 * @head: pointer to a list pointer
 * @str: pointer to string data on pointer
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	int length = 0;
	
	while (str[length])
		length++;
	temp = end_node(*head);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (temp)
		temp->next = new_node;

	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = NULL;

	return (new_node);
}

/**
 * end_node - return the end node
 * @head: pointer to list
 *
 * Return: end node
 */
list_t *end_node(list_t *head)
{
	list_t *last_node;
	
	last_node = head;

	if (last_node)
		while (last_node->next)
			last_node = last_node->next;
	return (last_node);
}
