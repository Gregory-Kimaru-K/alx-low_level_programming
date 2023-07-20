#include "main.h"
/**
 * int _isalpha - checks if it is an alphabet
 *@c: the character it checks
 * Return: returns 1 if alphabet and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
