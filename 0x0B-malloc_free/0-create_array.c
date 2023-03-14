#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of chars
 * @size: size of table
 * @c : caractere
 * Return: NULL or the pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
