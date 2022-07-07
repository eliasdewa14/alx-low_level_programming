#include "main.h"
#include <stdio.h>

/*
 * main - print the largest of the prime numbers
 *
 * Return: 0 for success
 */
int main(void)
{
	unsigned long i;
	unsigned long n = 612852475143;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			n = n / i;
	}
	printf("%lu\n", n);

	return (0);
}
