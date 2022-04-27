#include "main.h"
/**
 * power_of - recursion function
 *
 * @n: number to perform function
 * @uni:unique value to create for square root
 * Return: returns calculated result
 */
int power_of(int n, int uni)
{
	if (n < 0)
		return (-1);
	else if (uni * uni == n)
		return (uni);
	else if (uni * uni > n)
		return (-1);
	return (power_of(n, uni + 1));
}
/**
 * _sqrt_recursion - square root
 *
 * @n: number to square
 * Return: returns square root of n
 */
int _sqrt_recursion(int n)
{
	return (power_of(n, 0));
}
