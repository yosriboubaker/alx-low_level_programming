#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other char
 *
 * @str: the string
 */

void puts2(char *str)
{
	int i;

	int len;

	len = strlen(str);

	for (i = 0; i <= len - 1; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
