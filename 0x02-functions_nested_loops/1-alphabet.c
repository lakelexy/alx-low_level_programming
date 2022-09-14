#include "main.h"
/**
 * print_alphabet - function to prints the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char a = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
