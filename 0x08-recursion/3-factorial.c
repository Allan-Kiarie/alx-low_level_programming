#include "main.h"
/**
 * factorial - determine factorial of a given number
 * @n: input integer.
 * Return: integer.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		retun (1);
	return (n * factorial(n - 1));
}
