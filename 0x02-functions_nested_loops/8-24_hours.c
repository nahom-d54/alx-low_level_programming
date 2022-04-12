#include "main.h"
/**
 * print_last_digit - returns the last digit of given number
 * @n : character to check the parameter
 * Return: returns last digit of input
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0;a < 24; a++)
	{
		for (b = 0;b < 60;b++)
		{
			_putchar('0'+(a/10));
			_putchar('0' + (a%10));
			_putchar(':');
			_putchar('0'+(b/10));
			_putchar('0'+ (b%10));
			_putchar('\n');
		}
	}
}
