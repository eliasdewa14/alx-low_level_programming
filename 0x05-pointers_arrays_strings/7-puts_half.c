#include "main.h"

/**
 * puts_half - print half of a string
 * @str: input pointer string
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
		len++;

	if (len % 2 != 0)
		i = (len + 1) / 2;
	else
		i = len / 2;

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
