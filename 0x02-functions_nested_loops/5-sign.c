#include "main.h"
/**
 * print_sign - checks the sigh of integer
 * @c : character to check the parameter
 * Return: 0 if 0  1 if +ve -1 if -ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0 )
	{
		_putchar('-');
		return (-1);
	} else if ( n == 0)
	{
		_putchar('0');
		return (0);
	}
}
