#include "main.h"

/**
 * *_strstr - function that locates a substring
 * @haystack: string to search
 * @needle: substring to search
 *
 * Return: pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	for (; haystack[i]; i++)
	{
		for (; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == 0)
			return (&haystack[i]);
	}
	return (0);
}
