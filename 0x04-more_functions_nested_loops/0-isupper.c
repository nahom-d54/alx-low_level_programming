#include "main.h"
/**
* int _isupper - checks if upper
* @c - character of alphabet
* Return: 0 if false 1 if true
*/

int _isupper(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
