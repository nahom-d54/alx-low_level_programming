#include "main.h"
/**
 * _pow_recursion - power of x to y
 *
 * @x: to be powered
 * @y: to power
 * Return: power value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
