#include "main.h"
#include <stdlib.h>
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	unsigned int words = 0, count = 0, l, alloc = 0;
	char **space;
	int sp = 0;

	if (str == NULL)
		return (NULL);

	while (str[words] != '\0')
	{
		if (str[words] != ' ')
		{
			count++;
		}
		words++;
	}
	space = malloc(sizeof(char) * count + 1);
	if (space == NULL)
	{
		free(space);
		return (NULL);
	}
	for (words = 0; str[words] != '\0'; words++)
	{
		if (str[words] != ' ' && str[words - 1] == ' ')
		{
			for (l = words; str[l] != ' ' && str[l] != '\0'; l++)
			{
				space[sp][alloc] = str[l];
				alloc++;
			}
			space[sp][alloc] = '\0';
			alloc++;
			sp++;
		}
	}
	return (space);
}
