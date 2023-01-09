#include "main.h"
/**
 * sqrt_logic - returns the square root of a number
 * @n: input number
 * @c: iterator
 * Return: c or -1
 */
int sqrt_logic(int n, int c)
{
	if ((c % (n / c)) == 0)
	{
		if (c * (n / c) == n)
		{
			return (c);
		}
		else
			return (-1);
	}
	return (0 + sqrt_logic(n, c + 1));
}
/**
 * _sqrt_recursion - calculates sqrt of number
 * @n: input number
 * Return: 0 or -1 or 1 or sqrt of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (sqrt_logic(n, 2));
}
