#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * array_range - creates an array of integers
 * @min: min number
 * @max: maximum number
 * Return: A pointer or NULL
 */

int *array_range(int min, int max)
{
	int i, len;
	int *array;

	if (min > max)
		return (NULL);

	len = max - min;
	array = malloc((len + 1) * sizeof(int));

	if (!array)
		return (NULL);

	for (i = 0; i <= len; i++)
		array[i] = min++;

	return (array);

}
