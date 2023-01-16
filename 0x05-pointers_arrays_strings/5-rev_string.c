#include "main.h"

/**
 * rev_string - reverse a string
 * @s: input string
 * Return: void
 */

void rev_string(char *s)
{
	int length, i;
	char temp;

	while (length >= 0)
	{
		if (s[length] == '\0')
		{
			break;
		}
		length++;
	}

	int middle = length / 2;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
