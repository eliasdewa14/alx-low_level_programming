#include "main.h"

/**
 * print_sign - print the number sign
 * @c: input the number for testing
 *
 * Return: 1 and positive sign if the number is positive,
 * 0 and 0 if the number is 0 and -1 and - otherwise
 */
int print_sign(int c)
{
	char pos = '+';
	char neg = '-';
	char zero = '0';

	if (c > 0)
	{
		_putchar(pos);
		return (1);
	}
	else if (c < 0)
	{
		_putchar(neg);
		return (-1);
	}
	else
	{
		_putchar(zero);
		return (0);
	}
}
