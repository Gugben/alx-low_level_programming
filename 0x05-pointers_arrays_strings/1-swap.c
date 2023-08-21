#include "main.h"

/**
 * swap_int - function prints out lowercase of input word
 * @a: integer pointer
 * @b: integer pointer
 * Return: void
 **/

void swap_int(int *a, int *b)
{
	int store = *a;
	*a = *b;
	*b = store;
}
