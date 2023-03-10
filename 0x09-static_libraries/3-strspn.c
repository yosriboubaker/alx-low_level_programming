#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: input character with to locate into string s
 * Return: return a pointer
 */

unsigned int _strspn(char *s, char *accept)
{
	int len = strspn(s, accept);

	return (len);
}
