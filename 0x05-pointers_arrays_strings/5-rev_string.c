#include "main.h"

/**
 * rev_string - reverse a string
 * @s: input string
 * Return: void
 */

void rev_string(char *s)
{
	int length, i, j;
	char temp;

	while (length >= 0)
	{
		if (s[length] == '\0')
		{
			break;
		}
		length++;
	}

	for (i = 0; i < (length - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(s + j);
			*(s + j) = *(s + (j - 1));
			*(s + (j - 1)) = temp;
		}
	}
}
