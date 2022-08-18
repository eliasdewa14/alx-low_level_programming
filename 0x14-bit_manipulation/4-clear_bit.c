#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: input decimal number
 * @index: the index to set a bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	num = ~(num << index);
	if (num == 0)
		return (-1);
	*n &= num;
	return (1);
}