#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - print the concatenates two strings
 * @s1: input pointer of characters 1
 * @s2: input pointer of characters 2
 *
 * Return: array of characters
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, m;
	unsigned int len1 = 0, len2 = 0;
	char *str;

	while (s1[i])
	{
		len1++;
		i++;
	}
	while (s2[j])
	{
		len2++;
		j++;
	}
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);
	for (m = 0; m <= (len1 + len2); m++)
	{
		if (m < len1)
			str[m] = s1[m];
		else
			str[m] = s2[m];
	}
	return (str);
}

