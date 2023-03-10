#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check if the character is alphabetic or not
 * @c: parameter c
 * Return: return 1 (Success) fail (0)
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
