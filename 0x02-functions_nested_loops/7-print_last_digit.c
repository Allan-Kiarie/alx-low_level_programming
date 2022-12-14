#include "main.h"

/**
 * print_last_digit - Print last digit of a number
 *
 * @n: an integer
 *
 * Return: the absolute value of last digit
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;

	if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (i);
	}
}
