#include "main.h"
#include <ctype.h>

/**
 * _islower - check description
 *
 * @c: character to check
 *
 * Description: Check if the letter is lowercase
 *
 * Return: 1 if true else 0
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
