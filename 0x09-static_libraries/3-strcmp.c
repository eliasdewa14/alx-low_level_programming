#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: input pointer string
 * @s2: input pointer string
 *
 * Return: the difference of two strings
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
