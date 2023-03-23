#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all it's arguments
 * @n: number of arguments
 * @...: arguments
 * Return: sum of all arguments or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	int sum = 0;

	if (!n)
		return (0);

	va_start(list, n);

	for (; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);

}
