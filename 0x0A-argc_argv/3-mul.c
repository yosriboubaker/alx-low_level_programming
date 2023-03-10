#include "main.h"

/**
 * main - entry point & multiplies two numbers from the arguments
 * @argc: Arguments Count
 * @argv: Arguments Vector
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
