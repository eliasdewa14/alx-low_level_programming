#include "main.h"

/**
 * print_diagonal - draw diagonal line
 * @n: input parameter times the character
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i - 1; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
