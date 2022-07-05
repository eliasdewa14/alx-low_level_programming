#include "main.h"

/**
 * main - prints alphabet in lowercase
 *
 * Return: 0 always success
 */
int main(void)
{
	char ch = 'a';

	while(ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	
	return (0);
}
