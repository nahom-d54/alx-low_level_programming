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
	int x = 0;
	int y;
	int count = 0;

	while (s[x] != '\0')
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[x] == s[y])
			{
				count++;
			}
		}
		x++;
	}
	return (count + 1);
}
