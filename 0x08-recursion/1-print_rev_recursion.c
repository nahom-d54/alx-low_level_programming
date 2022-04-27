#include "main.h"
/**
 * _print_rev_recursion - prints backward
 *
 * @s: string to print
 */
void _print_rev_recursion(char *s)
{
	if (*(s++) != '\0')
	{
		_print_rev_recursion(s);
		_putchar(*s);
	}
}
