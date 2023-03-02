#include "main.h"
#include <ctype.h>

/**
 * string_toupper - changes all lowercase to uppercase
 *
 * @stmt: the string
 *
 * Return: string
 */
char *string_toupper(char *stmt)
{
	int i;

	for (i = 0; stmt[i]; i++)
	{
		if (islower(stmt[i]))
		{
			stmt[i] = toupper(stmt[i]);
		}
	}
	return (stmt);
}
