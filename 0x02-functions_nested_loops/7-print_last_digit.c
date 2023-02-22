#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - a function that prints the last digit of an integer
 * @x: integer argument
 * Return: the last digit of an integer
 */
int print_last_digit(int x)
{
	int y;

	if (x < 0)
	{
		x = abs(x);
	}

	y = x % 10;

	if (y < 0)
	{
		y = -y;
	}

	_putchar(y + '0');

	return (y);
}
