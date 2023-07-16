# include <stdio.h>
/**
 * main - prints the size of various data types
 *Return: 0
 */
int main(void)
{
	printf("Size of char: %1d byte(s)\n", sizeof(char));
	printf("Size of int: %1d byte(s)\n", sizeof(int));
	printf("Size of long int: %1d byte(s)\n", sizeof(long int));
	printf("Size of long long int: %1d byte(s)\n", sizeof(long long int));
	printf("Size of float: %1d byte(s)\n", sizeof(float));
	return (0);
}
