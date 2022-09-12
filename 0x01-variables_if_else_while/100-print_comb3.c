#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (succes)
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 8; digit1++)
	{
		for (digit2 = 0; digit2 < 9; digit2++)
		{
		putchar((digit1 % 9) + '0');
		putchar((digit2 % 9) + '0');
		if (digit1 == 7 && digit2 == 8)
			continue;
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
