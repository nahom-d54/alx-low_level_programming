#include <stdlib.h>
#include <time.h>
/**
 * main - prints alphabets
 * small letters
 *
 * Return: returns 0
 */
int main(void)
{
	char abc[] = "abcdefghijklmnopqrstuvwxyz";

	for (int a = 0; a < 26; a++)
	{
		putchar(abc[a]);
		putchar('\n');
	}
}
