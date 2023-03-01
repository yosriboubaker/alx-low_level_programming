#include <stdio.h>
#include "string.h"
#include "main.h"
/**
 * *_strncat - concat two strings up to a certain number of charactere
 *
 * @dest: the first char
 * @src: the second char
 * @n: max number of characters to concatenate
 *
 * Return: the concat of two  strings
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
