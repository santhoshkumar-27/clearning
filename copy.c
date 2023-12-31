#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // string s = get_string("s: ");

    char *s = get_string("s: ");

    char *t = malloc(strlen(s) + 1); // this is used for deep copy that means we create a seperate memory for the use case
    if (t == NULL)
    {
        return 1;
    }

    strcpy(t, s);
    // string t = s;
    if (strlen(t) == 0)
    {
        free(t);
        return 1;
    }
    t[0] = toupper(t[0]); // we literally try to copy the value but here we get
    // address of value so the two variable have stored the only
    // address pointing the same address

    printf("%s \n", s);
    printf("%s \n", t);

    // s: asdf
    // Asdf
    // Asdf

    // this is deep copy
    // s: asdf
    // asdf
    // Asdf
    free(t);
}