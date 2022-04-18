#include "main.h"

/**
 * print_array - prints array of intigers
 *
 * @a: array of intigers
 * @n: how many to print
 */
void print_array(int *a, int n)
{
	int num = 0;

	while (num <= n - 1)
	{
		printf("%d", a[num]);
		if (num != n - 1)
			printf(", ");
		num++;
	}
	printf('\n');
}
