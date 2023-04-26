#include <stdio.h>

/**
 * main - print sum of even-valued fibonacci numbers
 * below 4000000
 *
 * Return: Always 0
 */

int main(void)
{
	long int num1, num2, fib, sum;

	num1 = 1;
	num2 = 2;
	fib = 0;
	sum = num2;

	while (fib < 4000000)
	{
		fib = num1 + num2;
		num1 = num2;
		num2 = fib;

		if (fib % 2 == 0)
		{
			sum += fib;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
