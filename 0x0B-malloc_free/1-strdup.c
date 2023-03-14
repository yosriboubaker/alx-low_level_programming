#include "main.h"
#include "string.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string to copy
 * Return: NULL or a Pointer
 */

char *_strdup(char *str)
{
	char *copy;

	if (str == NULL)
		return (NULL);

	copy = strdup(str);

	if (copy == NULL)
		return (NULL);

	return (copy);
}
