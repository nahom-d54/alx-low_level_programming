#include "main.h"
/**
 * print_sign - checks the sigh of integer
 * @n : character to check the parameter
 * Return: 0 if 0  1 if +ve -1 if -ve
 */
int print_sign(int n)
{
	int stat;

	if (n > 0)
	{
		stat = 1;
		_putchar('+');
	} else if (n < 0)
	{
		stat = -1
		_putchar('-');
	} else
	{
		stat = 0;
		_putchar('0');
	}
	return (stat);
}
