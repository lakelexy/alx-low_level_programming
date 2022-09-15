#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: The uppercase character
 * Return: 1 for uppercase 0 for others
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
