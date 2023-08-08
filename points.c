#include <cs50.h>
#include <stdio.h>

int main(void)
{
    const int  COMPARINGPOINTS = 2;
    int points = get_int("Enter your points here?: ");

    if (points < COMPARINGPOINTS)
    {
        printf("You lost small points than me \n");
    }
    else if (points > COMPARINGPOINTS)
    {
        printf("You lost more points than me \n");
    }
    else {
        printf("you and me are lose same amount of points \n");
    }
}