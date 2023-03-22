#include "main.h"

/**
 * _isdigit - Check for a digit between 0 and 9
 * @c: A digit
 * Return: 1 if a digit and 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
