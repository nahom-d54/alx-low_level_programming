#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints last digit
 *
 * Return: returns 0
 */
int main(void)
{
	char abc[] = "abcdefghijklmnopqrstuvwxyz";

	int a = 0;

	for (a; a < 25; a++)
	{
		putchar(abc[a]);
	}
}
