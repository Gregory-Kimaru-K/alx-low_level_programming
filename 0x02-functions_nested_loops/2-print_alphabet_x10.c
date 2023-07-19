#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10x
 * Return: No return
 */

void print_alphabet_x10(void)
{
	int u = 1;
	char i;

	while (u <= 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		u++;
	}
}
