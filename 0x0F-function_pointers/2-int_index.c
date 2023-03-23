#include "function_pointers.h"

/**
 * int_index - search for a integer
 * @array: array to search
 * @size: array's size
 * @cmp: function's pointer
 * Return: index of the first element that matches the function or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
