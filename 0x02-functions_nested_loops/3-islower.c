#include "main.h"
/**
 * _islower - checks if lower or not
 *
 * @c: Alphabetic character
 * Return: 1 (Success) OR 0 (Failure)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
