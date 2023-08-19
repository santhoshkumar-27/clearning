#include <stdio.h>

void main(void)
{
    char a = 'h';
    char b = 'i';
    char c = '!';

    printf("%c %c %c \n", a, b, c);                   // implicit type conversion
    printf("%i %i %i \n", (int)a, (int)b, (int)c); // explicit type conversion
}