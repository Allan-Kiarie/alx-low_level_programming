#include "main.h"

/**
 * _islower - Indicate whether c is lower
 *
 * Return: 1 for success
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
       	else
	{
		return (0);
	}
	_putchar('\n');
}
