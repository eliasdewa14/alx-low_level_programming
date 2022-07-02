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
		for (j = '0'; j <= '9'; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
