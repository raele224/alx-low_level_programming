#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
int row, col, res;

for (row = 0; row <= 9; row++)
{
_putchar('0'); /* print the first number of each row */
for (col = 1; col <= 9; col++)
{
res = row * col;
_putchar(','); /* print the separator */
_putchar(' ');
/* print the result and pad with a leading zero if necessary */
if (res < 10)
_putchar(' ');
else
_putchar(res / 10 + '0');
_putchar(res % 10 + '0');
}
_putchar('\n'); /* move to the next row */
}
}
