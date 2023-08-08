#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the number of parameters
 * @argv: The two numbers
 * Return: Returns 0
 */
int main(int argc, char *argv[])
{
	int n;
	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
       return (0);	
}
