#include "main.h"

/**
 * factorial - print the factorial of a given number
 * @n: the input number
 *
 * Return: the factorial of given number
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	if (n > 1)
		return (n * factorial(n - 1));
	if (n < 0)
		return (-1);
	return (0);
}
