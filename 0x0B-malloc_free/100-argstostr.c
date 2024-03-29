#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of pointers to arguments
 * Return: pointer to array of char
 */

char *argstostr(int ac, char **av)
{
	char *temp;
	int len, i, j, index;

	if (ac == 0)
	{
		return (NULL);
	}

	i = 0;
	j = 0;
	len = 0;

	while (i < ac)
	{
		if (av[i] == NULL)
			return (NULL);

		while (av[i][j] != '\0')
		{
			j++;
			len++;
		}

		len++;
		i++;
	}

	temp = malloc(sizeof(char) * (len + 1));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	index = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			temp[index] = av[i][j];
			index++;
			j++;
		}

		temp[index] = '\n';
		index++;
	}

	temp[index] = '\0';

	return (temp);
}
