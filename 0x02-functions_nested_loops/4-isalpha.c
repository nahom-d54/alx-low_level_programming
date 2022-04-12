#include "main.h"
/**
 * _isalpha - checks the character if uppercase
 * @c : character to check the parameter
 * Return: 0 if false 1 if true
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
