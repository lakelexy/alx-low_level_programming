#include "main.h"
/**
 * print_last_digit - functions to print the last digit
 * @n: number being tested
 * Return: integer value
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');
	return (n);
}
