#include "main.h"
/**
 * print_last_digit -  return last digit of n
 *@n: character to be processed
 *Return: return last digit of n
*/

int print_last_digit(int n)
{
int lastdigit = n % 10;

if (n < 0)
lastdigit *= -1;

_putchar(lastdigit + '0');

return (lastdigit);
}
