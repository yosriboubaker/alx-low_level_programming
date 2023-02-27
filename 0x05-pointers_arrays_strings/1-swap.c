#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: a pointer the integer we want to set to 42
 * @b: a pointer the integer we want to set to 98
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
