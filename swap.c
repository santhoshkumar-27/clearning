#include <stdio.h>
#include <stdlib.h>

void swap(int a, int b);

int main(void)
{
    int x = 5;
    int y = 6;

    printf("x is %i, y is %i \n", x, y);
    swap(x, y);
    printf("x is %i, y is %i \n", x, y);
}

void swap(int a, int b)
{
    printf("a is %i, b is %i \n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("a is %i, b is %i \n", a, b);
}