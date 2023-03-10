#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings at most n bytes
 *
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int ch = 0, i;

	while (dest[ch])
		ch++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[ch + i] = src[i];
	}

	dest[ch + i] = '\0';

	return (dest);
}
