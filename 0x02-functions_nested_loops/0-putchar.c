#include "main.h"

/**
 * main - print '_putchar'
 *
 * Return: 0 always Success
 */
int main(void)
{
	char ch[] = "_putchar";
	int i = 0;

	while (i < 9)
	{
		putchar(ch[i]);
		i++;
	}
	putchar('\n');
	return 0;
}
