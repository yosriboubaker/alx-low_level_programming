#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beginning of located substr or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *substr = strstr(haystack, needle);

	return (substr);
}
