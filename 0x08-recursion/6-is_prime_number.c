#include "main.h"


int is_prime_helper(int n, int i);

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to check.
 *
 * Return: If the number is prime - 1. Otherwise - 0.
 */
int is_prime_number(int n)
{
if (n < 2)
return (0);

return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Checks if a number is prime.
 * @n: The number to check.
 * @i: The current divisor to test.
 *
 * Return: If the number is prime - 1. Otherwise - 0.
 */
int is_prime_helper(int n, int i)
{
if (i == n)
return (1);

if (n % i == 0)
return (0);

return (is_prime_helper(n, i + 1));
}
