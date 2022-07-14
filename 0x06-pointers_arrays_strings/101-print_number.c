#include "main.h"

/**
 * print_number - print integer numbers
 * @n: input integer parameter
 *
 * Return: Nothing
 */
void print_number(int n)
{
	int a, exp;
	int base = 10;

	for (a = 8; a > 0; a--)
		base *= 10;
	exp = base;
	if (n > 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
		_putchar('0');
	else
	{
		while (n / exp == 0)
			exp /= 10;
		while (exp >= 1)
		{
			_putchar((n / exp) + '0');
			n %= exp;
			exp /= 10;
		}
	}
}
