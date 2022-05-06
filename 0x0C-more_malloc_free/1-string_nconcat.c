#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * @n: string count to concat
 *
 * Return: point to a newly allocated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len = 0, len2 = 0;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	str = malloc(sizeof(*s1) + n);
	if (!str)
	{
		return (NULL);
	}
	while (s1[len] != '\0')
	{
		str[len] = s1[len];
		len++;
	}
	while (len2 < n && s2[len2] != '\0')
	{
		str[len] = s2[len2];
		len2++;
		len++;
	}
	str[len] = '\0';
	return (str);
}
