#include <stdio.h>
/**
 * main - prints String
 *
 * Return: returns if script runs succesfully
 */
int main(void)
{
	char toPrint[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fwrite(toPrint,sizeof(toPrint)-1,1,stdout);
	return (1);
}
