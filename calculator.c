#include <cs50.h>
#include <stdio.h>

int main(void) {

    // prompt user for x;
    // int x = get_int("x: ");
    long x = get_long("x: ");
    // prompt user for y;
    // int y = get_int("y: ");
    long y = get_long("y: ");
    // addition
    long z = x + y;
    printf("x + y:, %li \n", z);
}