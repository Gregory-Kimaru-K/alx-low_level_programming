#include "main.h"
/**
 * _islower - shows that it is lower case
 *@c: the character it checks
 * Return: return 1 if lower and 0 for opposite
 */
int _islower(int c)
{
	c = 'a';

	if (c >= 'a' && c >= 'z')
	{
		return (1);
	}
	return (0);
	
}
