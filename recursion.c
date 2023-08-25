#include <stdio.h>
#include <cs50.h>
#include <strings.h>


void draw(int h);

int main(void)
{
    int height = get_int("Enter a value for, How tall you need?: ");
    draw(height);
    return 0;
}

void draw(int h)
{
    // if (h == 0) // it will handle only come to zero but when user is given negative number it will not handle its logic error
    if (h <= 0) // it will handle thw negative numbers also
    {
        return;
    }
    draw(h - 1);
    for (int i = 0; i < h; i++)
    {
        printf("*");
    }
    printf("\n");
}