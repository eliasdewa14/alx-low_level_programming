#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - print that splits a string into words
 * @str: input pointers of strings
 *
 * Return: a pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, j, count = 0, m = 0, len = 0;
	char **s;

	if (*str == '\0' || str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != '\t' || str[i] != ' ')
			count++;
	}
	if (count == 0)
		return (NULL);
	s = malloc(sizeof(char *) * (count + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != '\t' || str[i] != ' ')
		{
			for (j = 0; str[j] != '\t' || str[j] != '\0'; j++)
				len++;
			s[m] = malloc(sizeof(char) * (len + 1));
			if (s[m] == NULL)
			{
				while (m < i)
				{
					free(*(s + m));
					m++;
				}
				free(s);
				return (NULL);
			}
		}
	}
	return (s);
}
