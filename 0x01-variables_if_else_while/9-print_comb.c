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
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);
		if (a == 9)                         
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
