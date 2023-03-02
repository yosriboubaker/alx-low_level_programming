#include "main.h"

/**
 * reverse_array - reverse array
 *
 * @a: array
 * @n: array length
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, first = 0, last = n - 1;

	while (first < last)
	{
		temp = a[first];
		a[first] = a[last];
		a[last] = temp;

		first++;
		last--;
	}
}
