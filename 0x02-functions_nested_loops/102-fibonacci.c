#include "main.h"
#include <stdio.h>

/**
 * main - print fibonacci number
 *
 * Return: 0 if success
 */
int main(void)
{
	int i;
	long int fab[50];

	fab[0] = 1;
	fab[1] = 2;

	printf("%ld, %ld, ", fab[0], fab[1]);

	for (i = 2; i < 50; i++)
	{
		fab[i] = fab[i - 1] + fab[i - 2];
		if (i == 49)
		{
			printf("%ld\n", fab[i]);
		}
		else
		{
			printf("%ld, ", fab[i]);
		}
	}
	return (0);
}

