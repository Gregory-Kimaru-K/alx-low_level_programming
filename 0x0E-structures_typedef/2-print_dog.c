#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a dog
 * @d: the dog
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if (d->name == 0)
		{
			printf("Name: (nil)\n");
		}

		printf("Name: %s\n", d->name);
		printf("Age: %lf\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
