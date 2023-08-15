#include "dog.h"

/**
 * init_dog - initializes a struct dog.
 * @d: to the struct dog
 * @name: to name of dog
 * @age: to the age
 * @owner: owner of the dog
 * Description: Intializes a struct dog with
 * the given values
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
