#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a pointer to a newly allocated space in memory,
 * which contains a copy of the string
 * @str: input pointer of characters
 *
 * Return: array of characters
 */
char *_strdup(char *str)
{
	unsigned int i = 0, len = 0, j;
	char *s;

	while (str[i])
	{
		len++;
		i++;
	}
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL || str == 0)
		return (NULL);
	for (j = 0; j <= len; j++)
		s[j] = str[j];
	return (s);
}

