#include "main.h"

/**
 * _strlen - counts length of string
 *
 * @s: string array characters
 *
 * Return: returns string length int
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
