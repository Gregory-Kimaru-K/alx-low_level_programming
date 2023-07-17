#include <stdio.h>
/**
 * main - prints the hexadecimal according to ASCII and new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char ch;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar(\n);
	return (0);
}
