#include "main.h"

/**
 * print_to_98 - print all natural number from n to 98
 * @n: input parameter for testing
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != n || i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			_putchar(i + '0');
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != n || i != 98)
                        {
                                _putchar(',');
                                _putchar(' ');
                        }
                        _putchar(i + '0');
                }
	}
	else
	{
		_putchar(n + '0');
	}
}

