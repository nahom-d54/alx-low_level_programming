#include "main.h"

/**
* _puts_recursion - prints string recursively
* @s: string pointer
*/
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*(s++) != '\0')
		_puts_recursion(s);
	_putchar('\n');
}
