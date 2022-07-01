#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints all lower alpahbet except q & e
 *
 * Return: 0 if Success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
