#include "main.h"

/**
 * puts_half - half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i = 0, len = 0, j;

	while (str[i] != '\0')
		len++;
	i++;
	if ((len % 2) == 0)
		j = len / 2;
	else
		j = (len - 1) / 2;

	for (i = j + 1)
		_putchar(str[i]);
	_putchar('\n');
}
