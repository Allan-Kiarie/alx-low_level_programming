#include "main.h"

/**
 * _strlen_recursion - determines length of a string
 * @s: input string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome_helper - compares characters at both ends of string
 * @s: input string
 * @start: lowest count
 * @end: highest count
 * Return: 1 if characters are same, 0 if not
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (*(s + start) != *(s + end))
		return (0);

	return (0 + is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: input string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (is_palindrome_helper(s, 0, _strlen_recursion(s) - 1));
}
