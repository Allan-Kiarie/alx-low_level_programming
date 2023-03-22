#include "main.h"
/**
 * _memcpy - copies memory area,
 * @dest: pointer to destination array.
 * @src: pointer to source of data.
 * @n: bytes to be copied.
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}