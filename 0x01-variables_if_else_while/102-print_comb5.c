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
 
	putchar(('%02d', b));
	putchar(' ');
	putchar(('%02d', a));
	
	if (a == 98 && b == 99)
	continue;
	putchar(',');
	}
	}
	}
	putchar('\n');
	return (0);
}
