#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc < 2)
    {
        printf("hello, missing command line arguments \n");
        return 1;
    }
    printf("hellow, %s \n", argv[1]);
    return 0; // normal exit status for testing if its is zero means it working fine, otherwise
    // it will fails the conditions
    // but if we don't give the compiler normally applies the return of zero implicitly
}