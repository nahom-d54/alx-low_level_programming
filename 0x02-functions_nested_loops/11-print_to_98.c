#include "main.h"
/**
 * print_to_98 - print natural numbers
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		if (n > 9)
		{
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
		} else
			_putchar('0' + n);
		if (n < 98)
		{
			_putchar(',');
			_putchar(' ');
			n++;
		}
		
	}
}
