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
	int j;

	for (i = '0'; i <= '8'; i++)
	{
		for (j = i + '1'; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
		}
		if (i != '8' && j != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
