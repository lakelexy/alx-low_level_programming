#include "main.h"
/**   
 * print_alphabet- prints the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void);
{
	char a = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(a);
		a++
	}
	putchar('\n');
}
