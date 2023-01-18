#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 * Return: struct dog, NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int i, pname, powner;

	p_dog = malloc(sizeof(*p_dog));

	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (pname = 0; name[pname]; pname++)
		;
	for (powner = 0; owner[powner]; powner++)
		;

	p_dog->name = malloc(pname + 1);
	p_dog->owner = malloc(powner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->name);
		free(p_dog->owner);
		free(p_dog);
		return (NULL);
	}

	for (i = 0; i < pname; i++)
		p_dog->name[i] = name[i];
	p_dog->name[i] = '\0';

	p_dog->age = age;

	for (i = 0; i < powner; i++)
		p_dog->owner[i] = owner[i];
	p_dog->owner[i] = '\0';

	return (p_dog);
}