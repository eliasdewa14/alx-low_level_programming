#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication of two numbers, followed by a new line
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0 for sucess
 */
int main(int argc, char **argv)
{
	int mul, a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
