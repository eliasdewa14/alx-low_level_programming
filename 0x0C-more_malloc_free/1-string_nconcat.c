#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: input pointer string
 * @s2: input pointer string
 * @n: input unsigned integer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0, m = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len1++;
	for (j = 0; s2[j]; j++)
		len2++;
	if (n >= len2)
		n = len2;
	str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < (len1 + n); i++)
	{
		if (i < len1)
			str[i] = s1[i];
		if (i >= len1)
		{
			str[i] = s2[m];
			m++;
		}
	}
	str[i] = '\0';
	return (str);
}
