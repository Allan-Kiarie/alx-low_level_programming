#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: input string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len, i, j;

	len = 0;
	while (*(s + len) != '\0')
		len++;

	if (len == 0)
		return (1);

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		if (*(s + i) != *(s + j))
			return (0);
	}
	return (1);
}
