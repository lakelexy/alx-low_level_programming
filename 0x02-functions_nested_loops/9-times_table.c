#include "main.h"
/**
 * times_table - functions to print the 9 times table
 * Return: void
 */
void times_table(void)
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
