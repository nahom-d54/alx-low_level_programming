#include "main.h"
/**
 * times_table - prints times table
 * Return:void
 */

void print_times_table(int n)
{

	int a = 0;
	int b = 0;
	int rep;
	
	if (n < 0 || n > 16)
		return
	while (a <= n)
	{

		while (b <= n)
		{
			rep = a * b;
			if (b == 0)
			{
				_putchar('0' + rep);
			}
			else if (rep < 10)
			{
				_putchar(' ');
				_putchar('0' + rep);
			}
			else
			{
				_putchar('0' + rep / 10);
				_putchar('0' + rep % 10);
			}

			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}

}
