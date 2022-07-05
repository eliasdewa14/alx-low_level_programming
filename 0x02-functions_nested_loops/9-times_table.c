#include "main.h"

/**
 * time_table - print 9 times table
 *
 * Return: 9 times table
 */
void time_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar((i * j) + '0');
		}
		_putchar('$');
		_putchar('\n');
	}
}
