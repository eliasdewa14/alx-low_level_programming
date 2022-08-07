#include <stdio.h>

/**
 * main - print fibonacci number 1 to 98
 *
 * Return: Nothing
 */
int main(void)
{
	int i = 2;
	unsigned long fib[50], sum = 2;
	
	fib[0] = 1;
	fib[1] = 2;

	while (i <= 49)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		if (fib[i] % 2 == 0 && fib[i] < 4000000)
			sum += fib[i];
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
