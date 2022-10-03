#include "main.h"
#include <stdio.h>

/**
 * *_strcat - print the concatenates of two strings
 * @dest: input pointer characters
 * @src: input pointer characters
 *
 * Return: Array of characters
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
