#include "main.h"

/**
 * print_number - print an integer
 * @n: input parameter
 * 
 * Return: Nothing
 */
void print_number(int n)
{
	if (n > 0)
		_putchar(n);
	else if (n < 0)
	{
		_putchar('-');
		_putchar(n);
	}
	else
		_putchar('0');
}
