#include <stdio.h>
#include <ctype.h>

/**
 * main- function prints out single digits number combinations
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

	putchar(n);
	putchar(b);
	if (n == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
