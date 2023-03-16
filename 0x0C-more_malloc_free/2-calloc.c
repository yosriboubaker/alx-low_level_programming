#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of the element
 * Return: A pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (!nmemb || !size)
		return (NULL);

	p = calloc(nmemb, size);

	if (!p)
		return (NULL);

	return (p);
}
