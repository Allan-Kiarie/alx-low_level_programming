#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: pointers to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int len, baseTwo;

	if (!b)
		return (0);

	i = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, baseTwo = 1; len >= 0; len--, baseTwo *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
			i += baseTwo;
	}
	return (i);
}
