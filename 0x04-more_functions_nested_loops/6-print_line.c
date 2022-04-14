#include "main.h"
/**
* print_line - prints underscore n times
*/
void print_line(int n)
{
	if (n > 0)
	{
		int a;

		for (a = 1; a < n; a++)
		{
			_putchar('_');
			_putchar('\n');
		}
	} else
		_putchar('\n');
}