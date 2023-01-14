#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes to be allocated
 * Return: pointer to allocated memory
 * if malloc fails, exit with 98
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit (98);
	return (ptr);
}
