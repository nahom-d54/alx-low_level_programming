#include "main.h"
/**
* int _isdigit - checks if number
* @c : character of number
* Return: 0 if false 1 if true
*/
int _isdigit(int c)
{
	return (c >= 0 && c <= 9 || c >= 48 && c <= 57);
}
