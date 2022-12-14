#include "main.h"

/**
 * main - print alphabet
 *
 * Return: 0 indicates success
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
	return (0);
}
