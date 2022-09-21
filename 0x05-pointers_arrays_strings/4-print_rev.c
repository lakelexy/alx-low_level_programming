#include "main.h"
#include <stdio.h>


/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	for (i -= 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}