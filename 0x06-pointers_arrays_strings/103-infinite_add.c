#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: the buffer that the function will use to store the result
 * @size_r: buffer size
 * Return: pointer to the result buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, maxlen, add, carry, num1, num2;

	len1 = 0;
	len2 = 0;
	carry = 0;

	while (*(n1 + len1) != '\0')
		len1++;
	while (*(n2 + len2) != '\0')
		len2++;

	if (len1 >= len2)
		maxlen = len1;
	else
		maxlen = len2;

	if (size_r <= maxlen + 1)
		return (0);

	r[maxlen + 1] = '\0';

	len1--;
	len2--;
	size_r--;

	num1 = *(n1 + len1) - 48;
	num2 = *(n2 + len2) - 48;

	while (maxlen >= 0)
	{
		add = num1 + num2 + carry;

		if (add >= 10)
			carry = add / 10;
		else
			carry = 0;

		if (add > 0)
			*(r + maxlen) = (add % 10) + 48;
		else
			*(r + maxlen) = '0';

		if (len1 > 0)
		{
			len1--;
			num1 = *(n1 + len1) - 48;
		} else
			num1 = 0;

		if (len2 > 0)
		{
			len2--;
			num2 = *(n2 + len2) - 48;
		} else
			num2 = 0;

		maxlen--;
		size_r--;
	}

	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
