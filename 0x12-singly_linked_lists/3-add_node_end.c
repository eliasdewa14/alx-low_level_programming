#include "lists.h"
#include <string.h>
unsigned int _strlen(const char *str);

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
	
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->len = _strlen(str);
	new_node->str = strdup(str);
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}

/**
 * _strlen - return the length of string
 * @str: pointer to string
 *
 * Return: string length
 */
unsigned int _strlen(const char *str)
{
	unsigned int length = 0;
	while (str[length])
		length++;
	return (length);
}
