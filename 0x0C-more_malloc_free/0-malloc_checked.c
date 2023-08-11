#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: memory size
 * Return: returns void
 */
void *malloc_checked(unsigned int b)
{
	void *_alocate = malloc(b);

	if (_alocate == NULL)
		exit(98);

	return (_alocate);
}
