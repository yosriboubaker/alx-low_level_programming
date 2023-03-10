#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search within
 * @accept: string to match
 * Return: return a pointer
 */

char *_strpbrk(char *s, char *accept)
{
	char *result = strpbrk(s, accept);

	return (result);
}
