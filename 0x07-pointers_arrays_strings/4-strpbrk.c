#include "main.h"
/**
 * _strpbrk - a function that searches
 * a string for any of a set of bytes.
 *
 * @s: source string
 * @accept: regex string
 * Return: returns null or pointer
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int x = 0;
	unsigned int y;

	while (accept[x] != '\0')
	{
		for (y = 0; s[y] != '\0'; y++)
		{
			if (accept[x] == s[y])
			{
				return (s + y);
			}
		}
	}
	return (0);
}
