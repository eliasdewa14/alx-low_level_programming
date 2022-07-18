#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: double pointer to a string
 * @to: pointer to string
 *
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
