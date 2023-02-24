#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_triangle - draws a triangle on the terminal
 * @size: is the size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (k = 1; k < size - i; k++)
			{
				_putchar(' ');
			}
			for (j = 0; j < i + 1; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
