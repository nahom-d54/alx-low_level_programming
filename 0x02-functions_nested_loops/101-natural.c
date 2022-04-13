#include "main.h"
#include <stdio.h>
/**
 * main - returns the absolute value of n
 * Return: returns 0 as output
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
