#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array integer
 * @a: points to an int variable
 * @n: input integer
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));

		if (if i != (n - 1))
		{
			printf(", ");
		}
	}
	printf('\n');
}
