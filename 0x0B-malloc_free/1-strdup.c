#include "main.h"
#include "string.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string to copy
 * Return: NULL or a Pointer
 */

char *_strdup(char *str)
{
	char *cop;

	if (str == NULL)
		return (NULL);

	cop = strdup(str);

	if (cop == NULL)
		return (NULL);

	return (cop);
}
