#include "main.h"

/**
 * _strlen_recursion - prints a string in reverse
 * @s: string to print
 *  Return:return  string legnth
 */

int _strlen_recursion(char *s)
{


	if (*s == '\0')
	{

		return (0);

	}


	return (1 + _strlen_recursion(s + 1));


}
