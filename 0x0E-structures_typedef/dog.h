#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the structure
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of dog
 * Description: This is a structure that defines the attributes of a dog
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
