#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: source string
 * @dest: destination string
 * Return: pointer to the string dest
 */

char *_strcat(char *dest, char *src)
{
	int length = 0, length1 = 0;

	while (*(dest + length) != '\0')
	{
		length++;
	}

	while (length1 >= 0)
	{
		*(dest + length) = *(src + length1);
		if (*(src + length1) == '\0')
		{
			break;
		}
		length++;
		length1++;
	}
	return (dest);
}
