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
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');
	return 0;
}
