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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
