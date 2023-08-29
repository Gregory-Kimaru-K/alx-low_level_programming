#include <unistd.h>

/**
 * _putchar - Prints one char
 *@c: character
 * return: Returns (0) success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
