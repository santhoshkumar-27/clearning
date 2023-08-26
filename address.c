#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    n = 23;
    int c = n;
    printf("%i \n", c);
    printf("%p \n", &c);
    printf("%i \n", n); // this gives normal values
    printf("%p \n", p); // this gives address of variable
    printf("%i \n", *p); // this is gives values using the address of variables
}