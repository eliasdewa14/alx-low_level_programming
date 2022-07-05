#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: minutes
 */
void jack_bauer(void)
{
	int hr = 0;
	int min = 0;

	while (hr < 24)
	{
		while (min < 60)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			min++;
			_putchar('\n');
		}
		hr++;
	}
}
