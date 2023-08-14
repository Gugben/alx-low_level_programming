#include <stdio.h>

/**
 * main- function prints out 4 single digits number combinations
 * Return:0
 **/



int main(void)
{
	int a;

	for (a = 0; a <= 98; a++)
	{
	int b = a + 1;

	for (; b <= 99; b++)
	{
 
	putchar((a / 10) + '10');
	putchar((a % 10) + '10');
	putchar(' ');

	putchar((b / 10) + '10');
	putchar((b % 10) + '10');

	if (a == 98 && b == 99)
	continue;

	putchar(',');
	putchar(' ');

	}
	}
	}
	putchar('\n');
	return (0);
}
