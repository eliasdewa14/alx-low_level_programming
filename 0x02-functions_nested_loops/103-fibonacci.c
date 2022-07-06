#include <stdio.h>

/**
 * main - prints the sum of the even-valued
 * fabinocci number less than 400000
 *
 * Return: Nothing
 */
int main(void)
{
	long a, b, sum;

	a = 1;
	b = 2;
	sum = 0;

	while (a < 4000000)
	{
		long c = a + b;

		if (a % 2 == 0)
			sum += a;
		a = b;
		b = c;
	}
	printf("%ld\n", sum);
	return (0);
}
