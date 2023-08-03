#include "main.h"
/**
 * _pow_recursion - gets the power of x to y
 * @x: subscript
 * @y: superscript
 * Return: -1(y<0) 1(y==0) and theint
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
