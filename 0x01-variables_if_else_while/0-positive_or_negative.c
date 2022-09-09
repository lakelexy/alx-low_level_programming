#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Assign a random number to a variable n
 * Return: 0 result (success)
 */
int main(void)
{
	srand(time(0));
	n = rand() - RAND_max / 2;
	if (n > 0)
	{
	printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%i is zero\n", n);
	}
	else
	{
	printf("%i is negative\n', n);
	}
	return (0);
}
