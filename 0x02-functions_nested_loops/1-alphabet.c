#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase from a-z
 * Return: Nothing
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
