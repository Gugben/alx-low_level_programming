
#include <stdio.h>

/**
 * main - print the sum of multiples of 3 and 5
 * Return:0
**/

int main(void)
{
	int k = 0, n = 1024, sum = 0;

	while (k < n)
	{
	if (k % 3 == 0 || k % 5 == 0)

	sum += k;

	k++;
	}
	printf("%d\n", sum);
	return (0);
}
