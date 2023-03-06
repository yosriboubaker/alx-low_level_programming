#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory destination
 * @src: memory source
 * @n: number of bytes
 * Return: pointer to location
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ch = dest;

	while (n--)
	{

		*dest = *src;

		src++;
		dest++;
	}

	return (ch);
}
