#include "main.h"

/**
 * main - the entry point
 * @argc: number of arguments
 * @argv: pointer of array
 *
 * Return: 1 for success
 */
int main(int argc, char *argv[])
{
	printf("%i, %p\n", argc, (void *)*argv);
	system("readelf -a ubuntu64");
	return (1);
}
