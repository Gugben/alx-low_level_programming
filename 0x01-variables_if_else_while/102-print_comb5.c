#include <stdio.h>

/**
 * main- function prints out 4 single digits number combinations
 * Return:0
 **/



int main(void)
{
	int n;

	for (n = 0; n <= 98; n++)
	{
	int b = n + 1;

	for (; b <= 99; b++)
	{

	putchar((n / 10) + '0');
	putchar((n % 10) + '0');
	putchar(' ');
	putchar((b / 10) + '0');
	putchar((b % 10) + '0');
	if (n == 98 && b == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar(10);
	return (0);
}
