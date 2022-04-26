#include "main.h"

/**
 * _strspn -  a function that gets the length of
 * a prefix substring.
 * @s: string array
 * @accept: accept string
 * Return: returns length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	unsigned int y;
	unsigned int count = 0;

	while (s[x] != '\0')
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[x] == s[x])
			{
				count++;
			}
		}
		x++;
	}
	return (count);
}
