#include <stdio.h>


/**
 * main- function prints out 3 single digits number combinations
 * Return:0
 **/

int main(void)
{
	int n;
	int c;
	int b;

	for (n = 0; n <= 9; n++)
	{
	/*printf("n:%d ", n);*/
	for (b = n + 1; b <= 9; b++)
	{


	for (c =  b + 1; c <= 9; c++)
	{
	putchar((n % 10) + '0');
	putchar((b % 10) + '0');
	putchar(c % 10) + '0');



	if (n == 7 && b == 8 && c == 9)

	continue;

	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
