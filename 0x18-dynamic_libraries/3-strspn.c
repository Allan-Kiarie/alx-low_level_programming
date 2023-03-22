#include "main.h"
/**
 * _strspn - gets length of a prefix substring,
 * @s: pointer to string to be scanned.
 * @accept: list of characters to match.
 * Return: number of matching characters.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
				break;
			}
			else
				count = 0;
		}
		if (count == 0)
			break;
	}

	return (i);
}
