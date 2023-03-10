#include <stdio.h>
#include "string.h"
#include "main.h"
/**
 * *_strcat - concat two strings
 *
 * @dest: the first char
 * @src: the second char
 *
 * Return: the concat of two  strings
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
