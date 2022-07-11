#include "main.h"

/**
 * _puts - print a string followed by a new line
 * @str: input pointer characters
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
