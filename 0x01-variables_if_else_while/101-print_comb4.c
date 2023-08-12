#include <stdio.h>
#include <ctype.h>

/**
 * main- function prints out 3 single digits number combinations
 * Return:0
 **/

int main(void)
{
	int n;

	for (n = '0'; n <= '8'; n++)
	{
	int b = n + 1;

	for (; b <= '9'; b++)
	{
	int c =  b + 1;

	for (; c <= 9; c++)
	{

	putchar(n);
	putchar(b);
	putchar(c);
	if (n == '7')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
