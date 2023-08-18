#include <cs50.h>
#include <stdio.h>
void main(void)
{
    int scores[3];
    int total = 0;
    // scores[0] = get_int("Score  :");
    // scores[1] = get_int("Score  :");
    // scores[2] = get_int("Score  :");

    // variable to store size of Arr
    int length = sizeof(scores) / sizeof(scores[0]);
    for (int i = 0; i < length; i++)
    {
        do
        {
            scores[i] = get_int("Enter the %i score: ", i + 1);
        } while (scores[i] < 0);

        total += scores[i];
    }
    printf("length %f %i\n", (float)length, total);
    printf("average %.3f \n", (total) / (float) length);
}