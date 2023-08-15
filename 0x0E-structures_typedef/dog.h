#ifdef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct dog - the structure
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
