#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer name to print
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
