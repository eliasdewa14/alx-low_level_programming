#include "main.h"

/**
 * print_sign - print the number sign
 * @c: input the number for testing
 *
 * Return: 1 and positive sign if the number is positive,
 * 0 and 0 if the number is 0 and -1 and - otherwise
 */
int print_sign(int c)
{
	if (c > 0)
	{
		return ("+," + 1);
	}
	else if (c < 0)
	{
		return ("-, " + -1);
	}
	else
	{
		return ("0, " + 0);
	}
}
