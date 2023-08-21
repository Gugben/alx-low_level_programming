#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 **/
void rev_string(char *s)
{
	char tmp;
	int i, j, length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
