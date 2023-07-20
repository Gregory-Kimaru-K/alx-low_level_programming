#include "main.h"
/**
 * print_last_digit - returns last digit of number
 * @n: the character it checks
 * Return: Value of last digit
 */
int print_last_digit(int n)
{
	int lst;

	lst = n % 10;

	if (lst < 10)
	{
		lst = lst * -1;
	}
	_putchar(lst + '0');
	return (lst);
}
