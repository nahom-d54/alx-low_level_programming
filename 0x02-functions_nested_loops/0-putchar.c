#include "main.h"
/**
 * main - prints string
 *
 * Return: return 0
 */
int main(void)
{
	char put[] = "_putchar";

	int num;

	for (num = 0; num < 8; num++)
	{
		_putchar(put[num]);
	}
	_putchar('\n');
	return (0);
}
