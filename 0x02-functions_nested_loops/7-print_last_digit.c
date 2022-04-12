#include "main.h"
/**
 * print_last_digit - returns the last digit of given number
 * @n : character to check the parameter
 * Return: returns last digit of input
 */
int print_last_digit(int n)
{
	int num;

	if (n < 0)
		num = (n % 10) * -1;
	else
		num = n % 10;
	_putchar('0' + num);
	return (num);
}
