#include "main.h"
/**
 * main - prints alphabets
 * small letters
 *
 * Return: returns 0
 */
void print_alphabet_x10(void)
{
	char abc[] = "abcdefghijklmnopqrstuvwxyz";

	int a, b;

	for(b = 0; b < 10; b++)
	{
		for (a = 0; a < 26; a++)
		{
			_putchar(abc[a]);
		}
		_putchar('\n');
	}
}
