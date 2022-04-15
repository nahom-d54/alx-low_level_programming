#include "main.h"
/**
 * main - Fiss buzz function
 * Return: returns 0
 */
int main(void)
{
	int a = 1231952;

	int b = 2;

	while (b * b <= a)
	{
		if (a % b)
			b++;
		else
			a //= b;
	}
	return (a);
}


