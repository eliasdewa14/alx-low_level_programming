#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - print the sum of a and b
 * @a: input integer
 * @b: input integer
 *
 * Return: the result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - print the difference of a and b
 * @a: input integer
 * @b: input integer
 *
 * Return: the result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - print the product of a and b
 * @a: input integer
 * @b: input integer
 *
 * Return: the result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - print the division of a and b
 * @a: input integer
 * @b: input integer
 *
 * Return: the result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - print the modular of a and b
 * @a: input integer
 * @b: input integer
 *
 * Return: the result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Errorr\n");
		exit(100);
	}
	return (a % b);
}
