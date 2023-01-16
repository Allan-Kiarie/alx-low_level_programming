#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: iput string
 * Return: void
 */

void puts_half(char *str)
{
	int length, i;

	for (length = 0; str[length] != '\0'; length++)
		;

	if (length % 2 == 0)
	{
		i = length / 2;
	}
	else
	{
		i = (length - 1) / 2;
	}
	for (i++; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
