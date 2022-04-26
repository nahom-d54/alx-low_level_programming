#include "main.h"
/**
 * print_diagsums - prints sum of diagonals
 * @a: array of ints
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int x = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (x < size * size)
	{
		if (x % (size + 1) == 0)
			sum1 += a[x];
		if (x % (size - 1) == 0 && x != 0 && x < size * size - 1)
			sum2 += a[x];
		x++;
	}
	printf("%d, %d\n", sum1, sum2)
}
