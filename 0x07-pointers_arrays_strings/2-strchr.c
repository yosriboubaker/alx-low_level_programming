#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a char in a string
 * @s: string to search in
 * @c: char to locate
 * Return: a pointer or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}

		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
