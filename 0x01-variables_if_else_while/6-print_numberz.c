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
	for (int i = '0'; i < '10'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
