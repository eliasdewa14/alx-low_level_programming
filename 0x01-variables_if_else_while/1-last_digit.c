#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the last digit of random
 * number is greater than, less than 5, or is 0
 *
 * Return: 0 if Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	if (n % 10 < 5)
	{
		printf("Last digit of %d is %d and is less
than 5 and not 0\n", n, n % 10);
	}
	else if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater
than 5\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n,
n % 10);
	return (0);
}
