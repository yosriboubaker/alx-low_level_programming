#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @s: string
 *
 * Return: string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 || isspace(s[i - 1]))
		{
			s[i] = toupper(s[i]);
		}
	}
	return (s);
}
