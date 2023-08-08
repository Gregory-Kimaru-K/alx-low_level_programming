#include "main.h"
/**
 * _strncat - concatinates two strings of n length line 2
 * @dest: string 1
 * @src: string 2
 * @n: int of seperation
 * Return: The string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
