#include "main.h"

/**
 * *_strcpy - copy a string appointed by src
 * @dest: input pointer characters
 * @src: input pointer character
 *
 * Return: copied character
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
