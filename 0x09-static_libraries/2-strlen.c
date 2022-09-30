#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string
 * Return: returns length as integer
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
