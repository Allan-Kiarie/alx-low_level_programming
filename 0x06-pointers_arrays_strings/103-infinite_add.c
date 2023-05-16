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

	/*Calculate the lengths of the input strings n1 and n2*/
	while (*(n1 + len1) != '\0')
		len1++;
	while (*(n2 + len2) != '\0')
		len2++;

	/*Determine the larger length between n1 and n2*/
	if (len1 >= len2)
		maxlen = len1;
	else
		maxlen = len2;

	/*check if the result string r has enough space to store the result*/
	if (size_r <= maxlen + 1)
		return (0);

	/*Null-terminate the result string*/
	r[maxlen + 1] = '\0';

	/*Decrement the counters and size*/
	len1--;
	len2--;
	size_r--;

	/*Convert the last characters of n1 and n2 to integers*/
	num1 = *(n1 + len1) - 48;
	num2 = *(n2 + len2) - 48;

	while (maxlen >= 0)
	{
		/*perform additioin of digits and add carry if necessary*/
		add = num1 + num2 + carry;

		if (add >= 10)
			carry = add / 10;
		else
			carry = 0;

		/*store the digit in the result string*/
		if (add > 0)
			*(r + maxlen) = (add % 10) + 48;
		else
			*(r + maxlen) = '0';

		/*Update the digits and counters for n1 and n2*/
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

		/*Decrement counters and size_r*/
		maxlen--;
		size_r--;
	}

	/*check if the result has leading zeros and adjust accordingly*/
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
