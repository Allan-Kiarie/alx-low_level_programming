#include "main.h"

/**
 * cap_string - Capitalize all words in a string
 * @s: input string
 * Return: pointer to new string
 */

char *cap_string(char *s)
{
	int i, j;
	int separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 92) && (s[i] <= 122))
		{
			s[i] = s[i] - 32;
		}
		for (j = 0; j < 13; j++)
		{
			if (s[i] == separators[j])
			{
				continue;
			}
		}
	}

	return (s);
}
