#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
long int num = 612852475143;
long int factor = 2;
long int largest_factor = 1;

while (num != 1)
{
if (num % factor == 0)
{
num /= factor;
largest_factor = factor;
}
else
{
factor++;
}
}
printf("%ld\n", largest_factor);

return (0);
}
