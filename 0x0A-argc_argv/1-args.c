#include "main.h"

/**
 * main - entry point & prints the number of arguments passed into it
 * @argc: Arguments Count
 * @argv: Arguments Vector
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
