#include <stdio.h>
#include <ctype.h>

/**
 * _strlen- function prints out lowercase of input word
 * @s: string pointer
 * Return:n
 **/

int _strlen(char *s)
{
	int n = 0;

	for (; *s != '\0'; s++)
	{
		n++;
	}
	return (n);
}
