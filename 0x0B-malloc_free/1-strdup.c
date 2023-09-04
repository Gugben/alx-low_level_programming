#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  returns a pointer to a new string
 *       which is a duplicate of the string str.
 * @str: char
 * Return: 0 on success, the _strdup function returns
 *  a pointer to the duplicated string.
 **/

char *_strdup(char *str)

{
	char *copy;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')

		i++;

	copy = malloc(sizeof(char) * (i + 1));

	if (copy == NULL)
		return (NULL);

	for (; str[j]; j++)
		copy[j] = str[j];
	return (copy);

}
