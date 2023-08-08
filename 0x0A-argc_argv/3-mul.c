#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: the number of parameters
 * @argv: The two numbers
 * Return: Returns 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		int num1 = *argv[1] - '0';
		int num2 = *argv[2] - '0';

		printf("%d\n", num1 * num2);

		return (0);
	}
}
