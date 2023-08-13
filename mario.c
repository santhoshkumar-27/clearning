#include <cs50.h>
#include <stdio.h>
void main(void)
{
    int n;

    do
    {
        n = get_int("Width: ");
    }
    while( n < 1);
    // printf("???? \n");
    for (int i = 0; i < n; i++)
    {
        printf("?");
    }
    printf("\n");
}