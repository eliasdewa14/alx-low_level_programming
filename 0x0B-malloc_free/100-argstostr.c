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
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	m = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[m] = av[i][j];
			m++;
		}
		str[m] = '\n';
		m++;
	}
	str[m] = '\0';
	return (str);
}
