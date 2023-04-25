#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 0; i < 100; i++)
{
int first_digit = i / 10;
int second_digit = i % 10;

for (j = i + 1; j < 100; j++)
{
int fd = j / 10;
int sd = j % 10;

if (fd == first_digit || fd == second_digit || sd == first_digit || sd == second_digit)
{
continue;
}

putchar(first_digit + '0');
putchar(second_digit + '0');
putchar(',');
putchar(' ');
putchar(fd + '0');
putchar(sd + '0');
if (i == 98 && j == 99)
{
continue;
}

putchar(',');
putchar(' ');
}
}

putchar('\n');
return (0);
}

