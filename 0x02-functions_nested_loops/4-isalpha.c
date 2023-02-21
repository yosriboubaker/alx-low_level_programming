#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check description
 *
 * @c: character to check
 *
 * Description: Check if c is a letter, lowercase or uppercase
 *
 * Return: 1 if true else 0
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
