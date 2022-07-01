#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints all single digit of base 10
 *
 * Return: 0 if Success
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf('\n');
	return (0);
}
