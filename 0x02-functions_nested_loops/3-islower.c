#include "main.h"

/**
 * islower - check for lowercase character
 *
 * Return: 1 if it is lowercase, 0 if it isn't lowercase
 */
int islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}