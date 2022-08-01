#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function that print a struct dog
 * @d: input struct to initialize
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
	       d->owner = "(nil)";	
	printf("Name: %s\n", d->name);
	printf("Age: %0.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}