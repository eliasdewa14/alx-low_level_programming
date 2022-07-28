#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: Nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	char *str;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	str = malloc(new_size);
	if (new_size > old_size)
		old_size = new_size;
	while (i < old_size)
	{
		str[i] = 'b';
		i++;
	}
	free(ptr);
	return (str);
}
