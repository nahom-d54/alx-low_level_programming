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
	char abc[] = "abcdfghijklmnoprstuvwxyz";

	int a;

	for (a = 0; a < 24; a++)
	{
		putchar(abc[a]);
	}
	putchar('\n');
	return (0);
}
