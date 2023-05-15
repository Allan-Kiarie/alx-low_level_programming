#include "main.h"

/**
 * cap_string - Capitalize all words in a string
 * @s: input string
 * Return: pointer to new string
 */

char *cap_string(char *s)
{
	int i, j = 0;
	int separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if ((s[j] >= 97) && (s[j] <= 122))
	{
		s[j] = s[j] - 32;
	}
	j++;

	while (s[j] != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (s[j] == separators[i])
			{
				if ((s[j + 1] >= 97) && (s[j + 1] <= 122))
				{
					s[j + 1] = s[j + 1] - 32;
				}
				break;
			}
		}
		j++;
	}
	return (s);
}
