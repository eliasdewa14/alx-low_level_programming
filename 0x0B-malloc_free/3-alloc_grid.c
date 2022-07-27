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
	int i, j = 0;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **) malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			while (j < i)
			{
				free(*(arr + j));
				j++;
			}
			free(arr);
			return (NULL);
		}
	}
	return (arr);
}
