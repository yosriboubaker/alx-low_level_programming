#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_most_numbers - check description
 *
 * Description: pirint numbers between 0 to 9 without 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
		_putchar(i + '0');
		}
	}
	_putchar('\n');
}
