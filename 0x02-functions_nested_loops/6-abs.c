#include "main.h"

/**
 * _abs - print the absolute value of the number
 * @num: input number for testing
 *
 * Return: The absolute of the number
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (num * (-1));
	}
	else
	{
		return (num);
	}
}
