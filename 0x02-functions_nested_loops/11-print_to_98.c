#include "main.h"
/**
 * print_to_98 - print natural numbers
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n; n < 98; n++)
		{
			if (n > 9)
			{
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			} else if (n < -9)
			{
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			} else
				_putchar('0' + n);
		}
	} else if (n > 98)
	{
		 for (n; n > 98; n--)
		 {
			 _putchar('0' + (n / 10));
			 _putchar('0' + (n % 10));
		 }
	}
				
}
