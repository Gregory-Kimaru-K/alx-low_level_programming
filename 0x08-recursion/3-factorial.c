#include "main.h"
/**
 * factorial - prints out the factorial of num
 * @n: the factorial number
 * Return: returns the number or 1
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
