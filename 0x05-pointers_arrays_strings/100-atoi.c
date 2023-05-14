#include "main.h"
#include <stdbool.h>
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: input string
 * Return: an integer
 */
int _atoi(char *s)
{
	int result, sign, i, digit;
	bool isNegative;

	result = 0;
	sign = 1;
	i = 0;
	isNegative = false;

	while (s[i] != '\0' && (s[i] < 48 || s[i] > 57))
	{
		if (s[i] == '-')
		{
			isNegative = true;
			sign *= -1;
		}
		i++;
	}

	while (s[i] >= 48 && s[i] <= 57)
	{
		digit = s[i] - 48;

		if (result > (INT_MAX - digit) / 10)
		{
			if (isNegative)
				return (INT_MIN);
			else
				return (INT_MAX);
		}

		result = result * 10 + digit;
		i++;
	}

	return (result * sign);
}
