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
	char abc[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int a;

	for (a = 0; a < 52; a++)
	{
		putchar(abc[a]);
	}
	putchar('\n');
	return (0);
}
