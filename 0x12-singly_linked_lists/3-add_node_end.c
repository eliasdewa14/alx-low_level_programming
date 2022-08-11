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

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	
	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = *head;

	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = temp;

	return (new_node);
}
