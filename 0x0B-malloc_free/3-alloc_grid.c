#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - print a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: array of integers
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **arr;

	arr = (int **) malloc(sizeof(int) * height);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
	}
	return (arr);
}
