#include <cs50.h>
#include <stdio.h>

float discount_price(float regular_price, float discount); // this prototype of declaration

void main(void)
{
    float regular = get_float("Enter the regular: ");
    int percentage = get_int("Enter the percentage: ");
    printf("your price is %.2f \n", discount_price(regular, percentage));
}

float discount_price(float regular_price, float discount)
{

    return regular_price * ((100 - discount) / 100);
}