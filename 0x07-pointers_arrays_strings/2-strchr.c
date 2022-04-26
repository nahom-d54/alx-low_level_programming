#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: src string
 * @c: what to find in string
 * Return: returns address or null
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x] != '\n')
	{
		if (c == s[x])
		{
			return (s + x);
		}
	}
	return (NULL);
}
