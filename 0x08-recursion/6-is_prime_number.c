#include "main.h"
int isPrime(int a, int b);

/**
 * is_prime_number - print 1 if the input integer is
 * a prime number, otherwise return 0
 * @n: input pararmeter
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	int prime;

	if (n <= 0 || n == 1)
	{
		return (0);
	}
	else
	{
		prime = isPrime(n, n / 2);
		if (prime == 1)
			return (1);
		else
			return (0);
	}
}
/**
 * isPrime - check the number is prime or not
 * @a: input parameter
 * @b: input parameter
 *
 * Return: 1 if it is prime, otherwise 0
 */
int isPrime(int a, int b)
{
	if (b == 1)
	{
		return (1);
	}
	else
	{
		if (a % b == 0)
		{
			return (0);
		}
		else
		{
			return (isPrime(a, b - 1));
		}
	}
}
