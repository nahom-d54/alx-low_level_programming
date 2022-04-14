#include "main.h"
/**
 * print_square - prints square
 * @size : number to square
 */
void print_square(int size)
{
	if (size > 0)
	{
		int a, b;

		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else
		_putchar('\n');
}
