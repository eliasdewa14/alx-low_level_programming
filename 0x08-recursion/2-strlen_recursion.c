#include "main.h"

/**
 * _strlen_recursion - print the length of a string
 * @s: input pointer string
 *
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
