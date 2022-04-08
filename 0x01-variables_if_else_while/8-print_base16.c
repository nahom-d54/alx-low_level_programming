#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints alphabets
 * small letters
 *
 * Return: returns 0
 */
int main(void)
{
	char hex[] = "0123456789abcdef";

	int a;

	for (a = 0; a < 16; a++)
	{
		putchar(hex[a]);
	}
	putchar('\n');
	return (0);
}
