#include "main.h"
/**
 *print_times_table - prints the n times table, starting with 0.
*/

void print_times_table(int n)
{
int j, i, prod;

for (j = 0; j <= n; ++j)
{
_putchar('0');

for (i = 1; i <= n; ++i)
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
