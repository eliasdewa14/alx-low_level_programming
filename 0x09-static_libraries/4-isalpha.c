#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: input character for testing
 *
 * Return: 1 if the character is upper or lowercase, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
