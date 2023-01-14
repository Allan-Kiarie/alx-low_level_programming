#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2 to be included
 * Return: pointer to new allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1, len2, len3, i;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (n > len2)
		n = len2;

	len3 = len1 + n;

	ptr = malloc(len3 + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len3; i++)
	{
		if (i < len1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - len1];
	}
	ptr[i] = '\0';
	return (ptr);
}
