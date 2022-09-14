#include "main.h"
/**
 * times_table - functions to print the 9 times table
 * Return: void
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
			return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else (c == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
