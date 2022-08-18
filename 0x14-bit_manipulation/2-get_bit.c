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
	unsigned int num = n >> index;
	
	if (index <= (sizeof(n) * 8 - 1))
		return (num & 1);
	return (-1);
}
