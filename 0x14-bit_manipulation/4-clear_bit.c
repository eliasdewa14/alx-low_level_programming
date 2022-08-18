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
	unsigned long int num = 1 << index;

	if (index <= (sizeof(n) * 8 - 1))
	{
		*n &= ~num;
		return (1);
	}
	return (-1);
}
