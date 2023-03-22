#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 * to the buffer pointed to by dest
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (length >= 0)
	{
		*(dest + length) = *(src + length);
		if (*(src + length) == '\0')
		{
			break;
		}
		length++;
	}
	return (dest);
}
