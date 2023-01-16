#include "main.h"

/**
 * rev_string - reverse a string
 * @s: input string
 * Return: void
 */

void rev_string(char *s)
{
	int length, middle, i;
	char temp, *str;

	while (length >= 0)
	{
		if (s[length] == '\0')
		{
			break;
		}
		length++;
	}

	middle = length / 2;

	str = s;
	for (i = 0; i < middle; i++)
	{
		temp = *(str + i);
		*(str + i) = *(str + (length - i - 1));
		*(str + (length - i - 1)) = temp;
	}
}
