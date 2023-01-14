#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes to be allocated
 * Return: pointer to allocated memory
 * if malloc fails, return NULL
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
