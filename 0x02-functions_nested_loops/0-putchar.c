#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main() {
    int i;		
    char str[]= "_putchar\n";

    for (i = 0; str[i] != '\0'; i++) {
        _putchar(str[i]);
    }
    return 0;
}
