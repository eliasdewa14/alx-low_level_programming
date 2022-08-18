#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an integer
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: integer number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, len = 0, sum = 0, n = 1;

	if (b == NULL)
		return (0);
	while (*b)
	{
		len++;
		i++;
	}
	while (len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] == '1')
			sum += n;
		n *= 2;
	}
	return (sum);
}
