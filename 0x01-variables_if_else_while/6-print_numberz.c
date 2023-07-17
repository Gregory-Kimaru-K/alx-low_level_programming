#include <stdio.h>
/**
 * main - prints all base 10 single digit numbers with putchar()
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
