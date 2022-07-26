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
	unsigned int i = 0, j = 0, n, m;
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
	str = malloc(sizeof(char) * (len1 + len2));
	if (str == NULL || str == 0)
		return (NULL);
	for (n = 0; n < len1; n++)
	{
		str[n] = s1[n];
	}
	for (m = len1; m < (len1 + len2); m++)
	{
		str[m] = s2[m - len1];
	}
	return (str);
}

