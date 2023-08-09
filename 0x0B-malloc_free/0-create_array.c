#include "main.h"
#include <stdlib.h>
/**
 * create_array - prints an array
 * @size: size of memory
 * @c: characters
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
	{
		return ('\0');
	}

	else if (size != 0)
	{

		ptr = (char*) malloc(size * sizeof(char));

		for (int i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}

	return (ptr);
}
