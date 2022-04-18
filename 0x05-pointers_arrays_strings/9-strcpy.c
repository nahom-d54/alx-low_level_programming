#include "main.h"

/**
 * _strcpy - copies the string pointed
 *
 * @dest: destination
 * @src: source
 *
 * Return: char with copy of string
 */
char *_strcpy(char *dest, char *src)
{
	int num;

	for (num = 0; *(src + num) != '\0'; num++)
	{
		dest[num] = *(src + num);
	}
	dest[num] = '\0';

	return (dest);
}
