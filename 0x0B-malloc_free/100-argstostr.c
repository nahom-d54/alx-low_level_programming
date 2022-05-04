#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates ac strings.
 * @av: argument value string
 * @ac: argument count
 * Return: pointer of an array of chars
 */
char *argstostr(int ac, char **av)
{
	char *strout;
	unsigned int i = 0, j = 0, k = 0;
	int l;

	for (l = 0; l < ac; l++)
	{
		if (av[l] == NULL)
			av[l] = "";
		for (i = 0; av[l][i] != '\0'; i++)
		{
			j++;
		}
	}

	strout = malloc(sizeof(char) * j + ac);

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (l = 0; l < ac; l++)
	{
		for (i = 0; av[l][i] != '\0'; i++)
		{
			if (k < j)
			{
				strout[k] = av[l][i];
				k++;
			}
		}
		strout[k] = '\n';
		k++;
	}
	return (strout);
}
