#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * more_numbers - check description
 *
 * Description: prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
	_putchar('\n');
}
