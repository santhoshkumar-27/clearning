#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>

void print_in_capitalize(string s);

void main(void)
{
    string s = get_string("Input: ");
    printf("output: ");
    print_in_capitalize(s);
    // printf("%s\n", s);
    // // int length = strlen(s);
    // for (int i = 0, n = strlen(s); i < n; i++)
    // {
    //     printf("%c", s[i]);
    // }
    // printf("\n");
}

void print_in_capitalize(string s)
{
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // printf("%c", s[i]);
        // if (s[i] >= 'a' && s[i] <= 'z')
        // if (islower(s[i]))
        // {
        //     // printf("%c", s[i] - 32);
        //     printf("%c", toupper(s[i]));
        // }
        // else
        // {
        //     printf("%c", s[i]);
        // }
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}