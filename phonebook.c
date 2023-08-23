#include <stdio.h>
#include <cs50.h>
#include <strings.h>

int main(void)
{
    string names[] = {"santhosh", "kumar"};
    string numbers[] = {"+91-6381130966", "+918682994321"};
    for (int i = 0; i < 2; i++)
    {
        if (strcasecmp(names[i], "santhosh") == 0)
        {
            printf("Found numbers is %s\n", numbers[i]);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}