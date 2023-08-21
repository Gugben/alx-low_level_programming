#include "main.h"

/**
  * puts_half - Prints half of a string
  * @str: The string to print
  */

void puts_half(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 1)
	{
		j = (j - 1) / 2;
		j += 1;
	}
	else
	{
		j = i / 2;
	}

	for (; j < i; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
