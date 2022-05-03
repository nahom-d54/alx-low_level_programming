#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates array
 * @size: size of the array
 * @c: character to initialize with
 *
 * Return: returns a pointer to array or Null
 */
char *create_array(unsigned int size, char c)
{
	unsigned int l;
	char *str;

	if (size < 1)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == 0)
		return (NULL);
	for (l = 0; l < size; l++)
	{
		str[l] = c;
	}
	return (str);
}
