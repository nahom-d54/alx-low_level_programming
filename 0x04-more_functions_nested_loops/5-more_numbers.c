#include "main.h"
/**
* more_numbers - prints 1 to 14 n times
*/
void more_numbers(void)
{
	int a, b;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a < 14; a++)
		{
			if (a < 10)
				_putchar('0' + a);
			else
			{
				_putchar('0' + a / 10);
				_putchar('0' + a % 10);
			}
		}
		_putchar('\n');
	}
}
