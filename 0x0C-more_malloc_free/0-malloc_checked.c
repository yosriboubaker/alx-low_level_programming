#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned integer
 * Return: A pointer or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (!p)
		exit(98);

	return (p);
}
