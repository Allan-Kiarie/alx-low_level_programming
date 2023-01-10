#include <stdio.h>
/**
 * main - prints number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of pointers to command line arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
