#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: input integer as number of arguments
 * @av: double pointers of array characters
 *
 * Return: pointers of strings
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, m, len = 0;
	char *str;

	if (ac <= 0 || av  == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][j])
		{
			len++;
			j++;
		}
		len++;
		i++;
	}
	str = malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	m = 0;
	while (i < ac)
	{
		while (av[i][j])
		{
			str[m] = av[i][j];
			m++;
			j++;
		}
		str[m] = '\n';
		m++;
		i++;
	}
	str[m] = '\0';
	return (str);
}
