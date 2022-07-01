#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - prints the last digit of a random
 * number is greater than 5, less than 5 or
 * is equal to 0
 *
 * Return: 0 if success
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
6 and not 0\n", n, n % 10);
	}
	else if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater
than 5\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
n, n % 10);
	return (0);
}
