#include <stdio.h>
/**
 * factorial - return the factorial of a given num
 *
 * @n: the num
 *
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n < 2)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
