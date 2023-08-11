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
	if (letter == 'e' || letter == 'q')
		continue;
	{
		letter = tolower(letter);
		putchar(letter);

	}

	putchar('\n');
	return (0);
}
