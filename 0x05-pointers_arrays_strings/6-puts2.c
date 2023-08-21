#include "main.h"

/**
  * puts2 - Prints every other character of a string
  * @str: The string to be treated
  */

void puts2(char *str)
{
	int a = 0;
	int b = 0;

	while (str[b] != '\0')
	{
		b++;
	}

	for (; a < b; a += 2)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
