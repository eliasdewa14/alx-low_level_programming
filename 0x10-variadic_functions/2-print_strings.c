#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print the strings followed by new line
 * @separator: input character to separate the strings
 * @n: number of arguments
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	if (separator == NULL)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			printf("(nil)");
		printf("%s", str);
		if (i != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
