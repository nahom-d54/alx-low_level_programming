#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: src string
 * @c: what to find in string
 * Return: returns address or null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
