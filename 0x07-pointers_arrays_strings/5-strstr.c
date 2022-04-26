#include "main.h"
/**
 * _strstr - a function that locates a substring.
 * @haystack: where to look
 * @needle: what to look
 * Return: returns poiner ot null
 */
char *_strstr(char *haystack, char *needle)
{
	int x = 0;
	int y;

	while (accept[x] != '\0')
	{
		for (y = 0; s[y] != '\0'; y++)
		{
			if (accept[x] == s[y] && accept[x + 1] == s[y + 1])
			{
				return (s + y);
			}
		}
	}
	return (NULL);
}
