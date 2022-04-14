#include "main.h"
/**
* print_numbers - prints 1 to 9
*/
void print_numbers(void)
{
	int a;

	for (a = 0; a < 9; a++)
	{
		_putchar('0' + a);
	}
	_putchar('\n');
}
