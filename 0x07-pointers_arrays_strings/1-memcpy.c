#include "main.h"

/**
 * _memcpy - memory copy
 *
 * @dest: where to copy
 * @src: what to copy
 * @n: length of array
 * Return: returns copied address
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
