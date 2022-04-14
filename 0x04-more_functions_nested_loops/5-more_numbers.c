#include "main.h"
/**
* mort_numbers - prints 1 to 14 1 times
*/
void more_numbers(void)
{
	int a, b;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a < 14; a++)
		{
			_putchar('0' + a);
		}
		_putchar('\n');
	}
}