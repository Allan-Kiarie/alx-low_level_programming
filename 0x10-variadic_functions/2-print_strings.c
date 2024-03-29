#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings followed
 * new line
 * @separator: string printed between strings
 * @n: number of strings passed to function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list an;
	unsigned int i;
	char *str;

	va_start(an, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(an, char *);

		if (separator && i > 0)
			printf("%s", separator);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");
	}
	printf("\n");
	va_end(an);
}
