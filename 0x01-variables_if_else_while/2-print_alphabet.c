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
	char abc[] = "abcdefghijklmnopqrstuvwxyz";

	int a;

	for (a = 0; a < 26; a++)
	{
		putchar(abc[a]);
		putchar('\n');
	}
}
