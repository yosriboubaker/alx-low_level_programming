#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void) 
{
	char str[8]= "_putchar";
	int i;

    	for (i = 0; i < 8; i++)
	{
        	putchar(str[i]);
     	}
	putchar('\n');

    return 0;
}
