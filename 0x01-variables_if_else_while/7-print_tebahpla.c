#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lett = 'z';
 	int i;

	for( i = '0' ; i <= 25 ; i++ ){
		putchar(lett);
		lett--;
	}
	putchar('\n');
	return (0);
}
