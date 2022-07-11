#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: input pointer value
 * @b: input pointer value
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
