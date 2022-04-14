#include "main.h"

/**
 * _isupper - A function that checks for uppercase letter
 * @c: An input letter
 * Return: 1 if c is uppercase or 0 else
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}