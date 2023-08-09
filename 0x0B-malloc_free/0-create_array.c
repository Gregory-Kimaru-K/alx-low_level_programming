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
	char *ptr = NULL;

	if (size == 0)
	{
		return ('\0');
	}

	if (size != 0)
	{

		ptr = (char *) malloc(size * sizeof(char));

		if (ptr != NULL)
		{
			for (int i = 0; i < size; i++)
			{
				ptr[i] = c;
			}
		}
	}

	return (ptr);
}
