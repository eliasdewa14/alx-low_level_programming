#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints alphabets in lower and uppercase
 *
 * Return: 0 if Success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
