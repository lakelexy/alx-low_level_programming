#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - To print whether a number is positive negative or zero
 * Return Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		Printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
	
}

	

	







	


