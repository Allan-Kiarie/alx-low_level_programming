#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: a random integer
 * @b: a random integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
