#include <stdio.h>

/**
 * main - print fibonacci number 1 to 98
 *
 * Return: Nothing
 */
int main(void)
{
	unsigned long i, f1 = 1, f2 = 2;
	
	printf("%lu, ", f1);
	for (i = 2; i < 98; i++)
	{

		printf("%lu", f2);
		unsigned long next = f1 + f2;
		f1 = f2;
		f2 = next;
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
