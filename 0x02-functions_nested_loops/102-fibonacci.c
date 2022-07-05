#incude "main.h"
#include <stdio.h>

/**
 * main - print fibonacci number
 *
 * Return: 0 if success
 */
int main(void)
{
	int i;
	int fib[50];

	fab[0] = 1;
	fab[1] = 2;

	printf("%d, %d, ", fab[0], fab[1]);

	for (i = 2; i < 50; i++)
	{
		fab[i] = fab[i - 1] + fab[i - 2];
		if (i == 49)
		{
			printf("%d\n", fab[i]);
		}
		else
		{
			printf("%d, ", fab[i]);
		}
	}
	return (0);
}

