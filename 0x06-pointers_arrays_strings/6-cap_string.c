#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string
 * @s: the string
 * Return: pointer to s
 */

char *cap_string(char *s)
{
	int i, next = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == ',' ||
			s[i] == ';' || s[i] == '.' || s[i] == '\n'
			|| s[i] == '!' || s[i] == '?' || s[i] == '"' ||
			s[i] == '(' || s[i] == ')' ||
			s[i] == '{' || s[i] == '}')
		{
			next = 1;

		} else if (next)
		{
			s[i] = toupper(s[i]);
			next = 0;
		}
	}

	return (s);
}
