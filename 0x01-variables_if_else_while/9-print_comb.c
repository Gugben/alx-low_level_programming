#include <stdio.h>
#include <ctype.h>

/**
 * main- function prints out all single digits combination
 * Return:0
 **/

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
	putchar(n);

	if (n == '9')
	continue;

	putchar(',');
	putchar(' ');

	}
	putchar('\n');
	return (0);
}
