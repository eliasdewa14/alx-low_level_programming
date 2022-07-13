#include "main.h"

/**
 * string_toupper - change all lowercase into uppercase
 * @s: input pointer of string
 *
 * Return: Uppercase string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);
}
