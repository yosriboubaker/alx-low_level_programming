#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: the string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}
	len -= 1;

	while (i < len)
	{
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;

		len--;
		i++;
	}

}
