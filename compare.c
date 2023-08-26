#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // int i = get_int("i: ");
    // int j = get_int("j: ");

    // if (i == j)
    // {
    //     printf("Same\n");
    //     return 1;
    // }

    // printf("Different\n");
    // string s = get_string("s: ");
    // string t = get_string("t: ");
    char *s = get_string("s: ");
    char *t = get_string("t: ");
    // thsese string always compare the between the memeory locations
    // if (s == t)
    printf("%s, \n", s);
    printf("%s, \n", t);

    printf("%p, \n", s);
    printf("%p, \n", t);
    if (strcmp(s, t) == 0)
    {
        printf("same \n");
        return 1;
    }

    printf("Different\n");
    return 0;
}