#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = ( n % 10 );
	if ( ld > 5 ){
		printf("last digit of  %d is %d and is greater than 5\n",n,ld);
	}
	else if ( ld < 6 && ld != 0 ){
		printf("last digit of %d is %d and is less than 6 and not 0\n",n,ld);
	}
	else {
		printf("last digit of %d is 0 and is 0\n",n);
	}	
	return (0);
}
