#include "main.h"

/**
 * _puts - print a string
 * @str: input string
 * Return: void
 */

void _puts(char *str)
{
	int length = 0;

	while (length >= 0)
	{
		if (str[length] ==  '\0')
		{
			_putchar('\n');
			break;
		}

		_putchar(str[length]);
		length++;
	}
}

