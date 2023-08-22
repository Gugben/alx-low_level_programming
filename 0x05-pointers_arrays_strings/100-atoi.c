#include "main.h"

/**
 *  _atoi - check if it is a digit
 * @s: Number
 * Return: If is a number, return 1 else return 0
 */


int _atoi(char *s)
{
	int i, j, n, lenght, f, digit;

	i = 0;
	j = 0;
	n = 0;
	lenght = 0;
	f = 0;
	digit = 0;

	while (s[lenght] != '\0')
		lenght++;

	while (i < lenght && f == 0)
	{
		if (s[i] == '-')
			j++;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (j % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}


}
