#include <stdio.h>
#include <ctype.h>

/**
 * main- function prints out lowercase of input word
 * Return:0
 **/

int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		letter = tolower(letter);
		putchar(letter);

	if (letter == 'z')
	{
		letter = 'A';

	for (; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	break;
	}
	}
	putchar('\n');
	return (0);
}
