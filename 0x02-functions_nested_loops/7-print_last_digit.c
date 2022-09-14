#include "main.h"
/**
 * print_last_digit - functions to print the last digit
 * @n: the passed args
 * Return: integer value
 */
int print_last_digit(int n)
{
	int j;

	if (n < 0)
		n = n*  -1;
	j = n % 10;
	_putchar(j + '0');
	return (j);
}
