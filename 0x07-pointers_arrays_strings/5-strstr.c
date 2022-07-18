#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: input string for search
 * @needle: substring
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
