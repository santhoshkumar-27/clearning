#include <cs50.h>
#include <stdio.h>
void main(void)
{
    int n;

    // do
    // {
    //     n = get_int("Size: ");
    // } while (n < 1);
    while (true)
    {
        n = get_int("Size: ");
        if (n > 0)
        {
            break;
        }
    }
    // printf("???? \n");
    // For each row
    for (int i = 0; i < n; i++)
    {
        // For each column
        for (int j = 0; j < n; j++)
        {
            // print bricks
            printf("#");
        }
        // move to next row
        printf("\n");
    }
    printf("\n");
}