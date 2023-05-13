#include "main.h"

/**
 * print_number - Prints an integer
 *
 * @n: input integer
 */

void print_number(int n)
{
	unsigned int  i, j, k;

	if (n < 0)
	{
		_putchar('-');
		j = -n;
	}
	else
	{
		j = n;
	}

	k = j;
	i = 1;

	while (k > 9)
	{
		k /= 10;
		i *= 10;
	}

	for (; i >= 1; i /= 10)
	{
		_putchar(((j / i) % 10) + 48);
	}
}
