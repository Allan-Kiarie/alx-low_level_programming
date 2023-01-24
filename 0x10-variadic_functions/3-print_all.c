#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments 
 * passed to the function
 * Return: no return
 */
void print_all(const char * const format, ...)
{
	va_list an;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char a_arg[] = "cifs";

	va_start(an, format);
	while (format && format[i])
	{
		j = 0;

		while (a_arg[j])
		{
			if (format[i] == a_arg[j] && c)
			{
				printf(", ");
				break;
			}
			j++;
		}

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(an, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(an, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(an, double)), c = 1;
				break;
			case 's':
				str = va_arg(an, char *), c = 1;

				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(an);
}
