#include "main.h"
#include <ctype.h>

/**
 * leet - encodes a string into 1337
 * @s: src string
 * Return: s
 */

char *leet(char *s)
{
	int i = 0, j;

	char letters[5] = {'a', 'e', 'o', 't', 'l'};
	char numbers[5] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (tolower(s[i]) == letters[j])
			{
				s[i] = numbers[j];

				break;
			}
		}

		i++;
	}

	return (s);
}
