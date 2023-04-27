#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
unsigned long int a, b, c;

a = 1;
b = 2;
printf("%lu, %lu, ", a, b);

for (i = 2; i < 98; i++)
{
c = a + b;
printf("%lu", c);
if (i < 97)
printf(", ");
a = b;
b = c;
}
printf("\n");

return (0);
}
