#include <unistd.h>
/**
 * _putchar - prints a character
 * @c: The character
 * Return: 1 on sucess -1 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
