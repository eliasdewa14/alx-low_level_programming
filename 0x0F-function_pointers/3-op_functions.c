#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - print the sum
 * op_sub - print the difference
 * op_mul - print product
 * op_div - print the division
 * op_mod - print the remainder
 * @a: input integer
 * @b: input integer
 *
 * Return: the result
 */
int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Errorr\n");
		exit(100);
	}
	return (a % b);
}
