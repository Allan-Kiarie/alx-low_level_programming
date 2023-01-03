#include "main.h"
/**
 * _memcpy - copies memory area,
 * @dest: Pointer to destination array.
 * @src: pointer to source of data.
 * @n: number of bytes to be copied.
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
