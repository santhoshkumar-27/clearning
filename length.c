#include <cs50.h>
#include <stdio.h>
#include <string.h>


int string_length(string data);

void main(void)
{
    string pname = get_string("Enter the name: \n");
    int length = strlen(pname);
    // int length = string_length(pname);
    printf("this is lenght %i \n", length);
}

int string_length(string s)
{
    int i = 0;
    // every string as a end of null character to mark as end of the string;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

// manual.cs50.io
// asciichart.com