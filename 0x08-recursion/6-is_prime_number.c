#include "main.h"
/**
 * is_prime_number - a function to check if prime
 *
 * @n: number to check
 * Return: return 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	int c;

	if (n <= 1)
		return (0);
	for (c = 2; c < 10; c++)
	{
		if (n % c == 0)
			return (0);
	}
	return (1);
}
