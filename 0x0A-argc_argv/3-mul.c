#include <stdio.h>
#include <stdlib.h>

/**
 * main - main program executed
 *
 * @argc: argument count
 * @argv: argument value
 * Return: returns 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
