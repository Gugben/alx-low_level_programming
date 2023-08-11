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

	}
	for (int i = 65; i <= 90; i++)
	{
		putchar("%c", i);
	}
	putchar('\n');
	return (0);
}
