#include "main.h"

/**
 * reverse_array - print reverse of the contentent of integers array
 * @a: input pointer array of integers
 * @n: number of elements of array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmp = 0;

	n--;
	while (i < n)
	{
		tmp = a[n];
		a[n--] = a[i];
		a[i++] = tmp;
	}
}
