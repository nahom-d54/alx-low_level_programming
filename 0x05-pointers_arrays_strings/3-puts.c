#include "main.h"

/**
 * _puts - prints string
 *
 * @str: string array characters
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
}
