#include "main.h"
/**
 * print_alphabet - prints alphabets
 * small letters
 */
void print_alphabet(void)
{
	char abc[] = "abcdefghijklmnopqrstuvwxyz";

	int a;

	for (a = 0; a < 26; a++)
	{
		_putchar(abc[a]);
	}
	_putchar('\n');
}
