#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	
	int i;

	if (n < 98)
	{
		for (i=n; i < 98 ; i++)
		{
			printf("%d, ",i);	
		}
		printf("98");
	}
	else if ( n > 98 )
	{
		for (i=n; i > 98 ; i--)
		{
			printf("%d, ",i);
		}
		printf("98");
	}
	else
	{
		printf("%d",n);
	}	

	printf("\n");
}	
