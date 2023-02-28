#include "main.h"
#include <string.h>

/**
 * print_rev - prints the string in reverse
 *
 * @s: the string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
