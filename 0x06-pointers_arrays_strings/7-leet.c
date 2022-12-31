#include "main.h"

/**
 * leet - Replaces a select characters in  a string with specific integers
 * @s: The input string
 * Return: the new string
 */

char *leet(char *s)
{
	int i = 0, j;
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int rep[] = {52, 51, 48, 55, 49};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lower[j] || s[i] == upper[j])
			{
				s[i] = rep[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
