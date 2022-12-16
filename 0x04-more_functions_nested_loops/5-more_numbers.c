#include "main.h"

/**
 * more_numbers - print 0 to 14 times 10
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + 48);
			}
			else
			{
				_putchar((j % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
