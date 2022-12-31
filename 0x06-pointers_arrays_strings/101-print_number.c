#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: input integer
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int  i, j, k;

	if (n < 0)
	{
		_putchar(45);
		j = n * -1;
	}
	else
		j = n;

	k = j;
	i = 1;

	while (k > 9)
	{
		k /= 10;
		i *= 10;
	}

	for (; i >= 1; i /= 10)
		_putchar(((j / i) % 10) + 48);
}
