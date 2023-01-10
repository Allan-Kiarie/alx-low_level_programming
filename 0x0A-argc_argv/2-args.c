#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: number of CLI arguments
 * @argv: array of pointers to CLI arguments
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
