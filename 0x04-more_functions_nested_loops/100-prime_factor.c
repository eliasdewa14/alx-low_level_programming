#include "main.h"
#include <stdio.h>

/**
 * main - print out the largest prime factor of the number
 *
 * Return: 0 for success
 */
int main(void)
{
	long i, n = 612852475143;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			n = n / i;
	}
	printf("%li\n", n);

	return (0);
}
