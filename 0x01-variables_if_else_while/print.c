#include <stdio.h>
#include <ctype.h>

/**
 * main- function prints out single digits number combinations
 * Return:0
 **/
int main(void)
{
int i;
for(i = 0; i < 100 ; i++){

    putchar((i/10)+'0');
    putchar((i%10)+'0');
    printf("\n");
}

return (0);
}
