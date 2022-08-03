#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: input string as name
 * @f: pointer function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
