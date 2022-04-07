#include <stdio.h>
/**
 * main - prints String
 *
 * Return: returns if script runs succesfully
 */
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(text, sizeof(text) - 1, 1, stdout);
	return (1);
}
