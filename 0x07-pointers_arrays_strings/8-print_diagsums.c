#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: input 2D array
 * @size: size of diagonals
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, n, sum_begin = 0, sum_end = 0;

	n = size * size;
	for (i = 0; i < n; i += size + 1)
		sum_begin += a[i];
	for (j = size - 1; j < n - 1; j += size - 1)
		sum_end += a[j];
	printf("%d, %d\n", sum_begin, sum_end);
}

