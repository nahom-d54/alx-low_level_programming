#include <stdio.h>
#include <ctype.h>
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
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	int n = 1;
	int m;
	int add = 0;

	while (n < argc)
	{
		for (m = 0; argv[n][m] != '\0'; m++)
		{
			if (!isdigit(argv[n][m]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[n]);
		n++;
	}
	printf("%d\n", add);
	return (0);
}
