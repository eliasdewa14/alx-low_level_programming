#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0 for sucess
 */
int main(int argc, char *argv)
{
	int add = 0, i;

	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
		{
			if (!(isdigit(argv[i])))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				add += atoi(argv[i]);
			}
		}
		printf("%d\n", add);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
