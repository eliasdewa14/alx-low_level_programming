#include "main.h"
#include <stdio.h>

/**
 * main - print out the largest prime factor of the number
 *
 * Return: 0 for success
 */
int main(void)
{
	long i, largest = 0, n = 612852475143;

	for (i = 2; n > 1; i++)
	{
		while (n % i == 0)
		{
			n /= i;
			largest = i;
		}
	}
	printf("%ld\n", largest);

	return (0);
}
