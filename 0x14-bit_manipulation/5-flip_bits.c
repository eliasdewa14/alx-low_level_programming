#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: required bit flips
 * @m: number to set
 *
 * Return: number of fliped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip_count = 0;
	unsigned long int xor;

	xor = (n ^ m);

	while (xor)
	{
		flip_count += xor & 1;
		xor >>= 1;
	}
	return (flip_count);
}
