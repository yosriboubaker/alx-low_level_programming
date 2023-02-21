#include "main.h"
/**
 * print_alphabet
 *
 * Description: print a lowercase lphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}

	_putchar('\n');
}
