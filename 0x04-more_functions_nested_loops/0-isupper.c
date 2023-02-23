#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isupper - upper or not
 *@c: is an integer parametre
 *
 *Description: return 1 if c is upper else return 0
 *
 * Return: int
 */

int _isupper(int c)
{
	int c;

	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
