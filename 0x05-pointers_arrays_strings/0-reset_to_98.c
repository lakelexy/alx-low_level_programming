#include "main.h"

/**
 * reset_to_98(int *n) - function that takes a pointer to an int
 * and updates the value it points to
 * @n: The pointer to an int
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	int n;
	int *p;

	n = 402;
	p = &n;
	printf("n=%d\n", n);
	*p = 98;
	printf("n=%d\n", n);
	return (0);
}
