#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - print single digit number using putchar
 *
 * Return: 0 if Success
 */
int main(void)
{
	int i;
	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
