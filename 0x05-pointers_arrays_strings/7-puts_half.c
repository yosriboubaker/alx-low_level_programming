#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 *
 * @str: the string
 */

void puts_half(char *str)
{
	int len = strlen(str);

	if (len % 2 == 0)
	{
		len = len / 2;
	}
	else
	{
		len = (len + 1) / 2;
	}

	for (; str[len] != '\0'; len++)
	{
		_putchar(str[len]);
	}

	_putchar('\n');
}
