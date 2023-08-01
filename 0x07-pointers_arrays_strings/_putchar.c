#include <unistd.h>
/**
 * _putchar - puts one character
 * @c:the character
 * Return: returns 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
