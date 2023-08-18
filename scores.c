#include <cs50.h>
#include <stdio.h>
void main(void)
{
    int scores[3];

    scores[0] = get_int("Score  :");
    scores[1] = get_int("Score  :");
    scores[2] = get_int("Score  :");

    // variable to store size of Arr
    int length = sizeof(scores) / sizeof(scores[0]);
    printf("length %i \n", length);
    printf("average %.3f \n", (scores[9] + scores[1] + scores[2]) / 3.0);
}