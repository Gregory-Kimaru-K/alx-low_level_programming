#include "main.h"
/**
 * _strncpy - copies a string 
 * @dest: string copy
 * @src: string original
 * @n: number of characters to cp
 * Return: returns dest
 */
char _strncpy(char *dest, *src, int n)
{
	int i, j;

	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; i < j && j < n; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
