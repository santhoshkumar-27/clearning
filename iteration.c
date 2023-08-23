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
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}