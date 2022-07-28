#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: input minimum integer
 * @max: input maximum integer
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
		arr[i] = i;
	return (arr);
}
