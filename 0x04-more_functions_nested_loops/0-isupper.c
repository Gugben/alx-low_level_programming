/**
 * _isupper - check if l is uppercase
 * @c: input alphabet to be checked
 * Return: 1 if its uppercase, 0 if not
**/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
