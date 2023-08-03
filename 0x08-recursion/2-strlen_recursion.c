#include "main.h"
/**
 * _strlen_recursion - calculates the length of a string
 * @s : charaterto be counted
 * Return: retunrs the number counted
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
