#include "main.h"

/**
 * _abs - print the absolute value of the number
 * @n: input number for testing
 *
 * Return: The absolute of the number
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return (n);
	}
}
