#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char
 * @size: input integer for the size of array
 * @c: input character
 *
 * Return: array of characters
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (str == NULL || str == 0)
		return (0);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
