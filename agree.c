#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // prompt user to agree
    char c = get_char("Do you agree? type - [y/n]: ");

    // check for the user has agreed or not
    if (c == 'y' || c == 'Y')
    {
        printf("continuing your download \n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Unable to continue this software installing\n");
    }
}