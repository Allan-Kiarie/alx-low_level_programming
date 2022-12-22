#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: input integer
 * @ n: input integer
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			k = a[j];
			a[j] = a[j - 1];
			a[j - 1] = k;
		}
	}
}
