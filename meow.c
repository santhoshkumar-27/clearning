#include <stdio.h>

// this is called hoisting
// this is only declaration not definition
void meow(void);

int main(void)
{
    meow();
}

void meow(void)
{
    for (int i = 0; i < 3; i++)
    {
        printf("meow \n");
    }
}