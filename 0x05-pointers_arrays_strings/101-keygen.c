#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	srand((unsigned int)(time(NULL)));
	int i;

	for (i = 0; i < 4; i++)
	{
		pass[i] = rand() % 9;
		char capLetter = 'A' + (rand() % 26);
		pass[i + 2] = capLetter;
		char letter = 'a' + (rand() % 26);
		pass[i + 3] = letter;
		printf("%d%c%c", pass[i], pass[i + 2], pass[i + 3]);
	}
	printf("\n\n");
}
