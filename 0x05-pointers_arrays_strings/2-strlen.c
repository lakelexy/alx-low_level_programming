#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string
 * return: length
 */
Int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
