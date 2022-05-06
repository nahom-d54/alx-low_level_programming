#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: amount of memory to alocate
 * Return: returns pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
