#include "main.h"
#include <stdlib.h>
/**
 * create_array - prints an array
 * @size: size of memory
 * @c: characters
 * Return: returns a char
 */
char *create_array(unsigned int size, char c)
{
	char *array = (char *) malloc(size);

	if (size == 0 || array == 0)
	{
		return (NULL);
	}

	while (size--)
	{
		array[size] = c;

		return (array);
	}
