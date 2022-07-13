#include "main.h"

/**
 * cap_string - capitalize word of strings
 * @s: input pointer string
 *
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i = 0;
	char separator[] = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{
		while (separators[j] != '\0')
		{
			if (s[i] == separator[j] && (s[i] >= 'a' && s[i] <= 'z'))
				s[i] -= 32;
			j++;
		}
		i++;
	}
	return (s);
}
