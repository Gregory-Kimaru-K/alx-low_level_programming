#include "main.h"
/**
 * factorial - prints out the factorial of num
 * @n: the factorial number
 * Return: returns the number or 1
 */
int factorial(int n)
{
	unsigned int p;
	p = n;

	if (p <= 1)
	{
		return (1);
	}
	return (p * factorial(p - 1));
}
