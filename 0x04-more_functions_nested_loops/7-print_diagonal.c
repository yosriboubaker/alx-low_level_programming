#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_diagonal - check description
 * @n: integer parametre
 *
 * Description: draws diagonal
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
}
