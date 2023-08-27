#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x = malloc(3 * sizeof(int)); // in each computer int has different size of memory, so we need to get implicitly
    // and it returns the array of memory so they started at zero indexed;
    // and the not start from the 1, so explicity made an error
    x[1] = 23;
    x[2] = 32;
    x[3] = 21;
    free(x);
}
// valgrind ./memory