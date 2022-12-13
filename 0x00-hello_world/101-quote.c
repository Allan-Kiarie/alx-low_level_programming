#include <stdio.h>
#include <unistd.h>

/**
 * main - use write() to print
 *
 * Return: 0 designates success
 */

int main(void)
{
	write (2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
