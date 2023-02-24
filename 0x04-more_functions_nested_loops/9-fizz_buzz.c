#include <stdio.h>

main()
{
	int i, j;
	
	for (i = 1; i <= 100; i++ )
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putcahr("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			_putchar("Fizz ");
		}
		else if (i % 5 == 0)
		{
			_putchar("Buzz ");
		}
		else
		{
		printf("%d", i);
		}
	}
	_putchar('\n');
}
