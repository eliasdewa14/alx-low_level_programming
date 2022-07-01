#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - print the comnibation of single digit num
 *
 * Return: 0 if Success
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i !='9')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
