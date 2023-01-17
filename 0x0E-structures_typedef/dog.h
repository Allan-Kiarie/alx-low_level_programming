#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - a structure that stores some info about a dog
 * @name: name of the dog
 * @age: its age
 * @owner: name of its owner
 * Description: struct called "dog" that stores its name, age
 * and name of its owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
