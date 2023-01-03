#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 *  with the constant byte b,
 *  @s: pointer to the destination object.
 *  @b: value to be filled.
 *  @n: number of bytes to be filled starting from s.
 *  Return: the pointer s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		*(s++) = b;
	}

	return (s);
}
