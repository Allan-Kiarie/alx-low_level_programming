#include "variadic_functions"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers
 * followed by a new line
 * @separator: string printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list an;
	unsigned int i;

	va_start(an, n);

	for (i = 0; i < n; i++)
	{
		if (!(separator == NULL) && i > 0)
			printf("%s", separator);
		printf("%d", va_arg(an, int));
	}
	printf("\n");
	va_end(an);
}
