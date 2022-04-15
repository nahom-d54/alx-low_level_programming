#include "main.h"
/**
 * main - prime number
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
			a /= b;
	}
	printf("%d", a);
	return (0);
}


