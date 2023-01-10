#include <stdio.h>
/**
 * main - prints its name followed by a new line
 * @argc: number of command line arguments
 * @argv: array of pointers to command line arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
