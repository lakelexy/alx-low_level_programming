#include <stdio.h>

/**
 * main - causes an infinite loop
 * Description: wc - 1 1-main.c 13:22:
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
