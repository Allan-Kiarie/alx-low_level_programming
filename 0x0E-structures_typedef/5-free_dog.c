#include "dog.h"
/**
 * free_dog - frees dog
 *
 * @d: struct dog variable
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
