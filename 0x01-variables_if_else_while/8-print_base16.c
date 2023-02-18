#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar(i + '0');
	}
	for (alphabet = 'a' ; alphabet <= 'f' ; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
