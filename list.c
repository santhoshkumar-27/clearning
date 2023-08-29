#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // int list[3] = {1, 2, 3};

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%i \n", list[i]);
    // }

    int *list = malloc(3 * sizeof(int));

    if (list == NULL)
    {
        return 1;
    }
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    // list of arrays same like above, below we use pointer arthmatic
    // *list = 1;
    // *(list + 1) = 2;
    // *(list + 2) = 3;

    // now we need add to one more element

    int *temp = malloc(4 * sizeof(int));

    for (int i = 0; i < 3; i++)
    {
        // printf("%i \n", list[i]);
        temp[i] = list[i];
    }
    temp[3] = 4;
    free(list); // free up memory already used
    list = temp;
    for (int i = 0; i < 4; i++)
    {
        printf("%i \n", list[i]);
    }
    free(temp); // free up now tempory memory
}