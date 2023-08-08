#include <stdio.h>
/**
 * main - prints all arguments
 * follwed by a new line
 * @argc: The number of arguments
 * @argv: The arguments
 * Return: Returns 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;

	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
