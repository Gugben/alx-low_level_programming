#include <stdio.h>
#include <ctype.h>

/**
 * main- function prints out lowercase of input word
 * Return:0
 **/

int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)

	{
		letter = tolower(letter);
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
