#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - print from z to a
 *
 * Return: 0 if Success
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
