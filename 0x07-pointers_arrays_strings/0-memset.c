#include "main.h"

/**
 * _memset -  function fills the first n bytes of the memory
 *
 * @s: memory address
 * @b: character to be filled with
 * @n: number of bytes to be filled with
 *
 * Return: returns n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		*s = b;
		s++;
	}
	return (s);
}
