#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string names[] = {"sa", "nt", "ho", "sh", "ku", "ma", "rl", "og", "an", "ay", "isl"};

    for (int i = 0; i < 11; i++)
    {
        if (names[i] == "isl")
        {
            printf("Found \n");
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}