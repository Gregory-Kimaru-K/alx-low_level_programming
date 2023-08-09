#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copy a string
 * @str: string to be copied
 * Return: returns \0 if str in NULL
 * returns pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *dup;
	int len = 0, i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	dup = (char *) malloc((sizeof(char) * len) + 1);

	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		str[i] = dup[i];
	}
	return (dup);
}
