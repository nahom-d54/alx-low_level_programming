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
	char abc[] = "0123456789";

	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(abc[a]);
	}
	putchar('\n');
	return (0);
}
