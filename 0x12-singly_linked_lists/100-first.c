#include <stdio.h>

/**
 * before_main - prints a message before main fuction is executed
 * Return: no return
 */
void before_main() __attribute__((constructor))
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
