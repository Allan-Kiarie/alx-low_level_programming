#include "main.h"
/**
 * _strchr - locates a character in a string,
 * @s: points to input string.
 * @c: character to be located.
 * Return: first occurrence of c in s.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*(s + i) != c && *(s + i) != '\0')
	{
		s++;
	}

	if (*(s + i) == c)
		return (s + i);
	else
		return ('\0');
}
