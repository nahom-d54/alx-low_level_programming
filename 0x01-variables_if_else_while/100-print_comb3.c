#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints alphabets
 * small letters
 *
 * Return: returns 0
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a < b)
			{
				putchar('0' + a);
				putchar('0' + b);
				if (a == 8)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
