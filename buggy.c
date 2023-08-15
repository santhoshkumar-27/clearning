#include <cs50.h>
#include <stdio.h>

int get_negative_int(void);

void main(void)
{
    int i = get_negative_int();
    printf("the negative number is %i \n0", i);
}

int get_negative_int(void)
{
    int n;
    do
    {
        n = get_int("Enter the negative numbers: ");
    } while (n > 0);

    return n;
}