#include "main.h"

/**
 * _strlen - print the length of string
 * @s: input pointer characters
 *
 * Return: the length of the character
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
