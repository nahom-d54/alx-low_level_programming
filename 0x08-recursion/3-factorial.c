#include "main.h"
/**
 * factorial - function that return factorial
 *
 * @n: number to factor
 * Return: result of the factorial
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
