#include "main.h"
int sqrt_wrapper(int num, int guess);

/**
 * _sqrt_recursion - print the natural square root of a number
 * @n: input parameter
 *
 * Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	return (sqrt_wrapper(n, 1));
}
/**
 * sqrt_wrapper - print a square root of a number
 * @num: input parameter
 * @guess: guess input number
 *
 * Return: the natural square root of a number
 */
int sqrt_wrapper(int num, int guess)
{
	if (guess * guess > num || num <= 0)
		return (-1);
	else if (guess * guess == num)
	{
		return (guess);
	}
	else
	{
		guess++;
		return (sqrt_wrapper(num, guess));
	}
}

