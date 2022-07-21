#include "main.h"
int palindrome(char *s, int f, int l);
int lengthOfString(int i, char *s);

/**
 * is_palindrome - check if a string is a palindrome or not
 * @s: input pointer string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len = lengthOfString(0, s);
	int first = 0, last = len - 1;

	return (palindrome(s, first, last));
}

/**
 * lengthOfString - print the length od string
 * @i: input number
 * @s: input pointer string
 *
 * Return: the length of string
 */
int lengthOfString(int i, char *s)
{
	if (s[i] == '\0')
		return (i);
	return (lengthOfString(i + 1, s));
}

/**
 * palindrome - check if a string is palindrome or not
 * @s: inout pointer string
 * @f: index of first letter
 * @l: index of last letter
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */
int palindrome(char *s, int f, int l)
{
	if (f == l)
		return (1);
	if (f > l)
		return (1);
	if (s[f] != s[l])
		return (0);
	return (palindrome(s, f + 1, l - 1));
}
