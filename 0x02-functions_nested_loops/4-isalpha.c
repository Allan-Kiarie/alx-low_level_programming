#include "main.h"

/**
 * _isalpha - Checks if a letter is an alphabet
 *
 * @c: A character in the ASCII code
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
