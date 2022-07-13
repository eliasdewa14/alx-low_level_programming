#include "main.h"

/**
 * _strncat - print that concatenates two string
 * @dest: input pointer characters
 * @src: input pointer source character
 * @n: number of bytes
 *
 * Return: Strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
