#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* *
 * main funtion
 * return whenever the number is positive_or_negative
 * */
int main(void)
{

/* *
 * this is for main
 * description_this fuction writes a random number whenever its executed
 * */	
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	 if (n<0)
	 	printf("%i is negative\n", n);
	 else if (n>0)
	 	printf("%i is positive\n", n);
	 else 
	        printf("%i is zero\n", n);	
	return (0);
}
