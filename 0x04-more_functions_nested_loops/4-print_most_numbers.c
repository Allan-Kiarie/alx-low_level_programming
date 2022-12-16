#include "main.h"

/**
 * print_most_numbers - prints between 0 and 9
 * except 2 and 4
 * Return: no return
 */

void print_most_numbers(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		if (j == 50 || j == 52)
		{
			continue;
		}
		else
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
