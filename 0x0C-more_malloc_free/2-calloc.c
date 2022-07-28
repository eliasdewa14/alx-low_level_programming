#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: input unsigned integer
 * @size: input unsigned integer as size
 *
 * Return: Nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(sizeof(char) * nmemb * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		str[i] = '\0';
	return (str);
}
