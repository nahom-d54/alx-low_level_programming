#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print to 98
 * @n : number to start from
 * Return:0 or 1
 */

void print_to_98(int n)
{

	while (n < 98)
	{
		if (n > 9 || n < -9)
		{
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
		} else
			_putchar('0' + n);
		n++;
	}
	while (n > 98)
	{
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
		n--;
	}

	_putchar('0' + 9);
	_putchar('0' + 8);
	_putchar('\n');
}
