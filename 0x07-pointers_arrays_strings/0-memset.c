#include "main.h"
/**
 * _memset - fills memory with constant byte,
 *  @s: pointer to the destination object.
 *  @b: value to be filled.
 *  @n: number of bytes to be filled starting from s.
 *  Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
