#include "main.h"
#include <stdlib.h>
/**
 * _strdup - creates a copy of the string argument
 * and generates a pointer to its newly allocated
 * space in memory
 * @str: input string
 * Return: pointer to duplicate string, 0 on failure
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++);

	ptr = (char *)malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		ptr[j] = str[i];
	}

	return (ptr);
}
