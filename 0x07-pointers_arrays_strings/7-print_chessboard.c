#include "main.h"
/**
 * print_chessboard - prints chess board
 * @a: array length of board
 */
void print_chessboard(char (*a)[8])
{
	int x = 0;
	int y;

	while (x < 8)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
		x++;
	}
}
