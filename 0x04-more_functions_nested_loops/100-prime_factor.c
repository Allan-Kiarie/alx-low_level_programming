#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 on success
 */
int main()
{
	long int num, largest_factor, i;

	num = 612852475143;
	largest_factor = -1;

	while (num % 2 == 0)
	{
		largest_factor = 2;
		num /= 2;
	}

	for (i = 3; i * i <= num; i += 2)
	{
		while (num % i == 0)
		{
			largest_factor = i;
			num /= i;
		}
	}
	
	if (num > 2)
		largest_factor = num;

	printf("%ld\n", largest_factor);

	return (0);
}
