#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1:First concat string
 * @s2:Second concat string
 * Return: concat of s1 and s2
*/

char *str_concat(char *s1, char *s2)
{
	char *str_con;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	str_con = malloc(sizeof(char) * (i + j + 1));
	if (str_con == NULL)
		return (NULL);

	i = 0, j = 0;
	while (s1[i] != '\0')
	{
		str_con[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str_con[i] = s2[j];
		i++, j++;
	}
	str_con[i] = '\0';
	return (str_con);
}
