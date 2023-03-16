#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: String One
 * @s2: String Two
 * @n: number of chars to include
 * Return: A pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i, l1, l2 = 0;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	l1 = strlen(s1);

	while (s2[l2])
		l2++;

	if (n >= l2)
		n = l2;

	new_str = malloc(l1 + n + 1);
	if (!new_str)
		return (NULL);

	for (i = 0; i < (l1 + n); i++)
	{
		if (i < l1)
			new_str[i] = *s1, s1++;
		else
			new_str[i] = *s2, s2++;
	}

	new_str[i] = '\0';
	return (new_str);
}
