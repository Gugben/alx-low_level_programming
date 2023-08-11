#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints on standard error
 * Return: 0
 **/

int main(void)

{
	write(stderr, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
