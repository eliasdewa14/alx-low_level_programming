#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: input decimal number
 * @index: indext to get a bit
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num = 1;

	num <<= index;
	if (num == 0)
		return (-1);
	if (n & num)
		return (1);
	else
		return (0);
}
