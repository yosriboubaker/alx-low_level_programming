#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - A function prints anyting.
 * @format: A list of type of arguments passed to the function.
 * @ ...: arguments
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *temp;
	int i = 0;

	va_start(list, format);
	while (!format)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(list, double));
				break;
			case 's':
				temp = va_arg(list, char*);
				if (temp)
				{
					printf("%s", temp);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(list);
	printf("\n");
}

