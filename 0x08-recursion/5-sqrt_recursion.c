#include "main.h"

/**
 * find_sqrt - helper function to find square root recursively
 * @n: input number
 * @i: number to check for square root
 *
 * Return: square root of n or -1 if n does not have a natural square root
 */
int find_sqrt(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (find_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 *
 * Return: square root of n or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (find_sqrt(n, 1));
}
