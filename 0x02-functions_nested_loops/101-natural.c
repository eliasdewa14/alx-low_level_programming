#include "main.h"
#include <stdio.h>

/**
 * main - print the summ of all multiple of 3 and 5
 * 
 * Return: 0 if success
 */
int main(void)
{
	int i = 0;
	int sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
