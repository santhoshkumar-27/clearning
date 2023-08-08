#include <cs50.h>
#include <stdio.h>


void meow(void) {
    for (int i = 0; i < 3; i++)
    {
        printf("meow \n");
    }
}


int main(void)
{
    meow();
}