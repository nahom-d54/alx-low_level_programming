#include "main.h"
#include <stdio.h>
/**
 * _abs - returns the absolute value of n
 * @n : character to check the parameter
 * Return: returns +ve number of input
 */
int main(void)
{
    int num;
    int sum = 0;

    for (num = 0; num < 1024; num++)
    {
        if (num % 3 == 0 || num % 5 == 0)
        {
            sum += num;
            printf("%d\n",sum);
        }
    }
	return (0);
}
