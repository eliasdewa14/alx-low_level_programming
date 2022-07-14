#include "main.h"

/**
 * cap_string - capitalize word of strings
 * @s: input pointer string
 *
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char separator[13] = " \t\n,;.!?\"(){}";
	int len = 13;

	while (s[i] != '\0')
	{
		j = 0;
		while (j < len)
		{
			if ((s[i - 1] == separator[j] || i == 0) && (s[i] >= 'a' && s[i] <= 'z'))
				s[i] -= 32;
			j++;
		}
		i++;
	}
	return (s);
}
