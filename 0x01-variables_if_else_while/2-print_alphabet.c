#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - print the alphabet in lowercase
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
	return (0);
}
