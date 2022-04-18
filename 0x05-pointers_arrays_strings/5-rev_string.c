#include "main.h"

/**
 * print_rev - makes string backwards
 *
 * @s: string array characters
 */
void print_rev(char *s)
{
	int a = 0;
	char back[] = s;

	while (s[a] != '\0')
	{
		a++;
	}

	int b = a;

	while (a != 0)
	{
		s[b - a] = back[a];
		a--;
	}
}