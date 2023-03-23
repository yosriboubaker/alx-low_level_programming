#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers separated by string
 * @separator: the separator pointer
 * @n: number of numbers to print
 * @...: parameters
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	int num;

	va_start(list, n);
	for (; i < n; i++)
	{
		num = va_arg(list, int);
		printf("%d", num);
		if (!separator)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);

}
