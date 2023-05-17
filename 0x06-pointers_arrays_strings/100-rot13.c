#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @src: input string
 * Return: pointer to the encoded string
 */

char *rot13(char *src)
{
	int i, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;

	while (src[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (src[i] == alpha[j])
			{
				src[i] = rot[j];
				break;
			}
		}
		i++;
	}

	return (src);
}
