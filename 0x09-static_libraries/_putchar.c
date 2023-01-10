#include "main.h"
/**
 * _putchar - prints a character to stdout
 * @c: input character
 * Return: 1 on success, 0 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
