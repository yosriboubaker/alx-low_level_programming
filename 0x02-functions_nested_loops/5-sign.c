#include "main.h"
#include <ctype.h>

/**
 * print_sign - check description
 *
 *@n: number to check
 * Description: Check if n is signe or not
 *
 * Return: 1 if positive , 0 if n egale a zero , -1 if n negative
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

	_putchar('\n');
}
