#include "main.h"
/**
 * jack_bauer - 24 hours a day
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a < 9; a++)
	{
		for (b = 0; b < 9; b++)
		{
			int mult;

			mult = a * b;

			if (mult > 9)
			{
				_putchar('0' + (mult / 10));
				_putchar('0' + (mult % 10));
			}else
				_putchar('0' + mult);
			if (b != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
	}
}
