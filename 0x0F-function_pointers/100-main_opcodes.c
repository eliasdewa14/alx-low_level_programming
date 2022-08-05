#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcode of own main function
 * @argc: argument count
 * @argv: array of argument
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;
	char *func;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	func = (char *)main;
	for (i = 0; i < num_bytes; i++)
	{
		if (i != 0)
			printf(" ");
		printf("%02x", func[i]);
	}
	printf("\n");
	return (0);
}
