#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        printf("%i \n", scores[i]);
        // 0 
        // 4096 
        // 0 
        // these are the garbage values because of the scores not initial value
    }
}