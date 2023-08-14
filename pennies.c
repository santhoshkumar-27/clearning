#include <cs50.h>
#include <math.h>
#include <stdio.h>

void main(void) {
    float amount = get_float("Enter in dollors$: ");
    int pennies = round(amount * 100);
    printf("Pennies: %i \n", pennies);
}