#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function given as a parameter on each element of an array
 * @array: input array
 * @size: size of array
 * @action: pointer to the function you need to use
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
