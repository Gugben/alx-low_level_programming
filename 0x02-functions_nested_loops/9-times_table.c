#include "main.h"
/**
 *times_table - prints the 9 times table, starting with 0.
*/

void times_table(void)
{
int n, i, prod;

for (n = 0; n <= 9; ++n)
{
_putchar('0');

for (i = 1; i <= 9; ++i)
{
_putchar(',');
_putchar(' ');
prod = n * i;

if (prod <= 9)
_putchar(' ');
else
_putchar((prod / 10) + '0');

_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
