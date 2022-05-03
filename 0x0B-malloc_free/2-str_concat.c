#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a string that concats two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: returns pointer to concated string address
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0, size2 = 0;
	unsigned int a = 0;
	char *allocate;

	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	allocate = malloc(sizeof(char) * (size1 + size2) + 1);
	while (a < size1)
	{
		allocate[a] = s1[a];
		a++;
	}
	while (a < (size2 + size1))
	{
		allocate[a] = s2[a];
		a++;
	}
	allocate[a] = '\0';
	return (allocate);
}
