#include "main.h"
/**
 * void times_table - time tabel by 9
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			int mult;

			mult = a * b;
			if (mult > 9)
			{
				 putchar('0' + (mult / 10));
				 putchar('0' + (mult % 10));
			} else
				putchar('0' + mult);
			if (b != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
