#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer
 *
 * @str: the string to aloocate the memory to
 * Return: returns null or pointer
 */
char *_strdup(char *str)
{
	char *to;
	int size = 0;
	int alloc;

	if (str == 0)
		return (NULL);
	while (str[size] != '\0')
	{
		size++;
	}
	to = malloc(sizeof(char) * size + 1);
	if (!to)
		return (NULL);
	for (alloc = 0; alloc < size; alloc++)
	{
		to[alloc] = str[alloc];
	}
	return (to);
}
