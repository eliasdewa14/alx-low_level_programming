#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints three digits numbers
 *
 * Return: 0 if Success
 */
int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '7'; i++)
	{
		for (j = '0'; j <= '8'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != '7' && j != '8' && k != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
			k = '0';
		}
		j = '0';
	}
	putchar('\n');
	return (0);
}
