#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: memory size to allocate in bytes
 * Return: pointer to the allocated memory
 * if malloc fails, the malloc_checked function should cause
 * normal process termination with status value of 98
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit (98);
	return (ptr);
}
