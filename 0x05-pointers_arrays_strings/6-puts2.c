#include "main.h"

/**
 * puts2 - print even number
 *
 * @str: string of characters
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
			_putchar(str[a]);
		a++;
	}
}
