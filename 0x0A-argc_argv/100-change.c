#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0 for sucess
 */
int main(int argc, char **argv)
{
	int money, change = 0, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);
	if (money >= 0)
	{
		for (i = 0; i < 5; i++)
		{
			while (money >= coins[i])
			{
				money -= coins[i];
				change++;
			}
		}
		printf("%d\n", change);
	}
	return (0);
}

