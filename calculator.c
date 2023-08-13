#include <cs50.h>
#include <stdio.h>

void calculator(void);


int main(void)
{

    // prompt user for x;
    // int x = get_int("x: ");
    // long x = get_long("x: ");
    // prompt user for y;
    // int y = get_int("y: ");
    // long y = get_long("y: ");
    // addition
    // long z = x + y;

    // if (x < y)
    // {
    //     printf("x is less than the y \n");
    // }
    // else if (x == y)
    // {
    //     printf("x is equal to the y \n");
    // }
    // else
    // {
    //     printf("x is greate then the y \n");
    // }
    // printf("x + y:, %li \n", z);
    calculator();
}


void calculator(void)
{
    float x = get_float("x: ");

    float y = get_float("y: ");

    float z =  x / y;

    printf("z is %.20f \n", z);
}