#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - print the string using write function
 *
 * Description: using the main function
 * This program prints "and that piece of art is useful" - Dora Korpar, 2015-10-19,"
 * Return (0)
 */
int main(void)
{
	int s = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	write(2, and that piece of art is useful\"- - Dora Korpar, 2015-10-19\n",s);
	return (1);
}
