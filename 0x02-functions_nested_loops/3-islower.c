#include "main.h"

/**
 * _islower - check for lowercase character
 * @c - input character for testing
 * Return : 1 if it's lowercase, 0 if not.
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
