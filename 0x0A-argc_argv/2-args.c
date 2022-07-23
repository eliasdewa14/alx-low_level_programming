#include "main.h"
#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0 for sucess
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
			printf("%s\n", argv[count]);
	}
	return (0);
}

