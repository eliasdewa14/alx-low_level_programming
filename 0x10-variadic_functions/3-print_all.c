#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: list of types of arguments passed to the function
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i;
	char *str;

	if (format == NULL)
		return;
	va_start(ap, format);
	for (i = 0; format[i]; i++)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char*);
				if (str == NULL)
					printf("(nil)");
				printf("%s", str);
				break;
		}
		if (format[i])
			printf(", ");
	}
	va_end(ap);
	printf("\n");
}
