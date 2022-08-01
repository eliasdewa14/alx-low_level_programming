#include "dog.h"
#include <stdlib.h>

/**
 * int_dog - function that initialize a variable of type struct dog
 * @d: input structure
 * @name: input name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
