#include <stdio.h>

/**
 * main - main program executed
 *
 * @argc: argument count
 * @argv: argument value
 * Return: returns 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
