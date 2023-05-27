#include "main.h"
#include <stdlib.h>

/**
 * word_count - counts words in a string
 * @str: input string
 * Return: no of words
 */
int word_count(char *str)
{
	int count, i;

	count = 0;
	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
		i++;
	}

	return (count);
}

/**
 * strtow - splits a string into words
 * @str: input string
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int len, count, i, j, k, l, m;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	count = word_count(str);
	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	i = 0;
	j = 0;
	k = 0;
	while (i < len && count > 0)
	{
		if (str[i] != ' ')
		{
			j = i;
			while (str[j] != ' ' && str[j] != '\0')
				j++;

			words[k] = malloc((j - i + 1) * sizeof(char));
			if (words[k] == NULL)
			{
				for (l = 0; l < k; l++)
				{
					free(words[l]);
				}
				free(words);
				return (NULL);
			}

			m = 0;
			while (i < j)
			{
				words[k][m] = str[i];
				m++;
				i++;
			}

			words[k][m] = '\0';
			k++;
			count--;
		} else
			i++;
	}

	words[k] = NULL;

	return (words);
}
