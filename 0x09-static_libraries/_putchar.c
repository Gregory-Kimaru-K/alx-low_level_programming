#include <unistd.h>
#include "main.h"
/**
 * _putchar - puts a single character
 * @c: character
 * Return: 1 character or -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
