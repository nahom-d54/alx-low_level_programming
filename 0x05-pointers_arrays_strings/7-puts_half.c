#include "main.h"

/**
 * puts_half - print half string
 *
 * @str: string of chars
 */
void puts_half(char *str)
{
	int a = 0;
	int half;

	while (str[a] != '\0')
	{
		a++;
	}
	half = a / 2;
	while (half > 0)
	{
		_putchar(str[a - half]);
		half--;

	}
	_putchar("\n");
}
