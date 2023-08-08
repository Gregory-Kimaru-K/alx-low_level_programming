#include <unistd.h>

/**
 * _putchar - prints 1 character
 * @c : character
 * Return: Returns 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
