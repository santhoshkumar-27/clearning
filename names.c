#include <stdio.h>
#include <cs50.h>
#include <strings.h>

int main(void)
{
    string names[] = {"sa", "nt", "ho", "sh", "ku", "ma", "rl", "og", "an", "ay", "isl"};

    for (int i = 0; i < 11; i++)
    {
        if (strcasecmp(names[i], "isl") == 0)
        {
            printf("Found \n");
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}