#include <cs50.h>
#include <stdio.h>

float discount_price(float regular_price, float discount);

void main(void)
{
    float regular = get_float("Enter the regular: ");
    printf("your price is %.2f \n", discount_price(regular, 25));
}

float discount_price(float regular_price, float discount)
{
    
    return regular_price * ((100 - discount) / 100);
}