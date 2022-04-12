#include "_putchar.c"
#include <stdio.h>
/**
 * main - prints alphabets
 * small letters
 *
 * Return: returns 0
 */
int main(void)
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
	return (0);
}
