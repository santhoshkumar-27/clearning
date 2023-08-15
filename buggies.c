#include <stdio.h>
// this is syntacticaly correct but logically wrong implemented

void main(void)
{
    for (int i = 0; i <= 3; i++)
    {
        printf("i is %i \n", i);
        printf("#\n");
    }
}