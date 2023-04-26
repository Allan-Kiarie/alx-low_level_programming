#include <stdio.h>

/**
 * main - print first 50 fibonacci starting with 1 and 2.
 *
 * Return: always 0
 */
int main()
{
	int i;
	long int num1, num2, fib;

	num1 = 1;
	num2 = 2;
	printf("%ld, %ld", num1, num2);

	for (i = 0; i < 48; i++)
	{
		fib = num1 + num2;
		printf(", %ld", fib);
		num1 = num2;
		num2 = fib;
	}

	printf("\n");
	return (0);
}
