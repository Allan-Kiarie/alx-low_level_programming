#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurrence of the character c in the string s
 * or NULL is the character not found
 *
 * @s: Pointer to the input string
 * @c: Character to be searched
 *
 * Return: pointer to first occurrent of c in s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != c && *(s + i) != '\0')
		s++;
	if (*(s + i) == c)
		return (s + i);
	else
		return ('\0');
}
