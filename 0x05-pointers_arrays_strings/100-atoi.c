#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: input pointer character
 *
 * Return: integer number
 */
int _atoi(char *s)
{
	unsigned int n;
	int i = 0, neg = 1, br;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			neg *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			n *= 10;
			n += (s[i] + '0');
			br = 1;
		}
		else if (br == 1)
			break;
		i++;
	}
	n *= neg;

	return (n);
}
