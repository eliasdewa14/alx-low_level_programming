#include <stdio.h>

/**
 * main - print fibonacci number 1 to 98
 *
 * Return: Nothing
 */
int main(void)
{
	int i;
	unsigned long a, b, c;

	i = 0;
	a = 0;
	b = 1;
	while (i <= 98)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu, ", c);
		if (i != 98)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
