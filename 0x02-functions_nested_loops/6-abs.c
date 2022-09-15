#include "main.h"
/**
 * int _abs - function that compute the absolute value of integer
 */
int _abs(int)
{
	int v;
	unsigned int r;
	int const mask = v >> sizeof(int) * CHAR_BIT - 1;

	r = (v + mask) ^ mask;
}
