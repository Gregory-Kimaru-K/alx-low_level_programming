#include "main.h"
/**
 * swap_int - swaps the value of a,b
 * @a: number
 * @b: num2
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
