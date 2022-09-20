#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - reset to 98
 * @n: integer
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
