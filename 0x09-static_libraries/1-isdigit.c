#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isdigit - digit or not
 *@c: is an integer parametre
 *
 *Description: return 1 if c is a digit else return 0
 *
 * Return: int
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
