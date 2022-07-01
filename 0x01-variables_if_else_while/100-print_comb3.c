#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - print all possible combinations
 * of two digits
 *
 * Return: 0 if Success
 */
int main(void)
{
	int i;

	for(i = 0; i < 100; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		if (i != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
