#include <stdio.h>
#include <cs50.h>

void main(void)
{
    // char a = 'h';
    // char b = 'i';
    // char c = '!';

    string h = "hi!";
    printf("%s \n", h);
    printf("%i%i%i%i \n", h[0], h[1], h[2], h[3]);
    // printf("%c %c %c \n", a, b, c);                   // implicit type conversion
    // printf("%i %i %i \n", (int)a, (int)b, (int)c); // explicit type conversion
}