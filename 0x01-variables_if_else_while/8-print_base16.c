#include <stdio.h>
#include <ctype.h>

/**
 * main- function prints out single digits of base 16 in lowercase
 * Return:0
 **/

int main(void)
{
	int letter;
	int n;

	for (n = '0'; n <= '9'; n++)

	{
		putchar(n);

	if (n == '9')
	{
		for (letter = 'a'; letter <= 'f'; letter++)

	{
		letter = tolower(letter);
		putchar(letter);
	}

	break;
	}
	}

	putchar('\n');
	return (0);
}
