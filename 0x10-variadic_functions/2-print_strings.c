#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string separator to print
 * @n: number of arguments
 * @...: arguments
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	char *str;

	va_start(list, n);
	for (; i < n; i++)
	{
		str = va_arg(list, char*);
		if (!str)
			printf("(nil)");
		else
			printf("%s", str);
		if (!separator)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
