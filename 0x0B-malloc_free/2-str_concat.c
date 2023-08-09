#include <stdlib.h>
#include "main.h"
/**
 * str_concat -Concatinates two stringa
 * @s1: string 1
 * @s2: String 2
 * Return:returns NULL on failure
 * returns a pointer on success
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0 i, j;


	if (s1 == '\0')
	{
		s1 = '\0';
	}
	if (s2 == '0')
	{
		s2 = '\0';
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}
	char *ccat = malloc(len1 + len2 + 1);

	if (ccat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ccat[i] = s1[i];

	for (j = 0; j < len2; j++)
		ccat[i + j] = s2[j];

	return (ccat);
