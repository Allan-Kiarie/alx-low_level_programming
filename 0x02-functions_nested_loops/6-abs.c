#include "main.h"

/**
 * _abs - compute the absolute value of a number
 *
 * @n: an integer 
 *
 * Return: absolute value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
