#include "main.h"

/**
 * print_last_digit - print the last digit of the number
 * @n: input number for testing
 *
 * Return: the last digit of the given number
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}
	return (n % 10);
}
