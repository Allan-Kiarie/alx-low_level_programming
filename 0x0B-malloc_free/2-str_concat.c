#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new string, or  NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *ptr;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	for (i = 0; s1[i] !=  '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	ptr = malloc(sizeof(char) * (i + j + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (k = 0, l = 0; k < (i + j + 1); k++)
	{
		if (k < i)
			ptr[k] = s1[k];
		else
			ptr[k] = s2[l++];
	}

	return (ptr);
}
