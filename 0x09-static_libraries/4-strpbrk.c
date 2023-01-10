#include "main.h"
/**
 * _strpbrk - scans string for any set of bytes
 * @s: string to scan
 * @accept: string to match
 * Return: pointer to byte in s matching byte in accept
 * null if no byte matches
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
