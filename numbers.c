#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int numbers[] = {1, 2, 3, 5, 4, 0};

    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] == 8)
        {
            printf("Found \n");
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}