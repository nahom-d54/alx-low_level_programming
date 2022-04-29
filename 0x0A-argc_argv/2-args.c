#include <stdio.h>

/**
 * main - main program executed
 *
 * @argc: argument count
 * @argv: argument value
 * Return: returns 0 on success
 */
int main(int argc, char *argv[])
{
	int n = 0;

	while (n < argc)
	{
		printf("%s\n", argv[n]);
		n++;
	}
	return (0);
}
