#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: input string
 * Return: an integer
 */
int _atoi(char *s)
{
	int result, sign, i;

	result = 0;
	sign = 1;
	i = 0;

	while (s[i] != '\0' && (s[i] < 48 || s[i] > 57))
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	while (s[i] >= 48 && s[i] <= 57)
	{
		result = result * 10 + (s[i] - 48);
		i++;
	}

	return (result * sign);
}
