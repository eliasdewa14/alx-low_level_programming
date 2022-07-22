#include "main.h"

/**
 * _strncpy - print copies of strings
 * @dest: input pointer characters
 * @src: input point source characters
 * @n: number of bytes
 *
 * Return: Strings
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
