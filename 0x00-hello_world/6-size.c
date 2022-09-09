#include <stdio.h>

/**
 * main - print the size of various type in the printf function
 *
 * Description: using the main function
 * This program prints the size of various type in c programming language
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %d byte(s)\n", sizeof(c));
	printf("size of an int: %d byte(s)\n", sizeof(i));
	printf("size of a long int: %d byte(s)\n", sizeof(li));
	printf("size of a long long int: %d byte(s)\n", sizeof(lli)),
	printf("size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
