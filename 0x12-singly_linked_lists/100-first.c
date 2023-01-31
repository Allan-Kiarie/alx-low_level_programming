#include <stdio.h>

/**
 * before_main - prints a message before main fuction is executed
 * Return: no return
 */
void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
