#include "main.h"

/**
 * _islower - check for lowercase character
 * c: character for testing
 *
 * Return: 1 if it is lowercase, 0 if it isn't lowercase
 */
int _islower(int c)
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
