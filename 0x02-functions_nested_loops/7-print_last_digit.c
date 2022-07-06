#include "main.h"

/**
 * print_last_digit - print the last digit of the number
 * @n: input number for testing
 *
 * Return: the last digit of the given number
 */
int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		i = -n;
	}
	else
	{
		i = n;
	}
	_putchar(i + '0');
	return (i);
}
