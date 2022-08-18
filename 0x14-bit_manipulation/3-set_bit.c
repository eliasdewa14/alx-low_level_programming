#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: input decimal number
 * @index: the index to set bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num = 1;

	num <<= index;
	if (num == 0)
		return (-1);
	*n |= num;
	return (1);
}
