#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: location
 * @b: char to fill with
 * @n: number of bytes
 *
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *c = s;

	while (n--)
	{
		*s = b;
		s++;
	}

	return (c);
}
