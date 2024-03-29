#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: pointer to the buffer
 * @size: no. of bytes of the buffer to be printed
 * Return: nothing
 */

void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <= 0)
		printf("\n");

	for (i = 0; i < size; i += 10)
	{
		printf("%.8x:", i);

		for (j = i; j < i + 10; j++)
		{
			if (j % 2 == 0)
				printf(" ");

			if (j < size)
				printf("%.2x", *(b + j));
			else
				printf("  ");
		}

		printf(" ");
		for (k = i; k < i + 10; k++)
		{
			if (k >= size)
				break;

			if (*(b + k) >= 32 && *(b + k) <= 126)
				printf("%c", *(b + k));
			else
				printf("%c", '.');
		}

		printf("\n");
	}
}
