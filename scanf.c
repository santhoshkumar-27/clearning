#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // int n;
    // printf("x: \n");
    // scanf("%i", &n);
    // printf("x, %i \n", n);

    char *s = malloc(3 * 4);
    printf("s: ");
    scanf("%s", s);
    printf("x, %s \n", s);
    free(s);
}