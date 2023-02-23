#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_line - check description
 * @n: integer parametre
 *
 * Description: prints n  lines
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('-');
		}
	_putchar('\n');
	}
}
