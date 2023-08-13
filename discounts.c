#include <cs50.h>
#include <stdio.h>

void main(void)
{
    float regular = get_float("Enter the regular: ");
    float sale = regular * 0.85;
    printf("your price is %.2f", sale);
}