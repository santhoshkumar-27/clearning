#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // this is static memory allocations
    // int list[3] = {1, 2, 3};

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%i \n", list[i]);
    // }
    // this is dynamic memory allocations
    int *list = malloc(3 * sizeof(int));

    // if not allocated free end up here
    if (list == NULL)
    {
        return 1;
    }
    // assigning values
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    // list of arrays same like above, below we use pointer arthmatic
    // *list = 1;
    // *(list + 1) = 2;
    // *(list + 2) = 3;

    // now we need add to one more element
    // this is dynamic memory allocations
    int *temp = malloc(4 * sizeof(int));

    // now copy values from the list to temp
    for (int i = 0; i < 3; i++)
    {
        // printf("%i \n", list[i]);
        temp[i] = list[i];
    }
    // add extra values
    temp[3] = 4;
    free(list); // free up memory already used
    list = temp; // remember a new array

    // print the list
    for (int i = 0; i < 4; i++)
    {
        printf("%i \n", list[i]);
    }
    free(list); // free up now tempory memory

    return 0;
}
// we freeing up the address in the variables