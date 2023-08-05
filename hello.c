#include <stdio.h>

int main(void)
{
    // Create an integer variable that will store the chars we get from the user
    char answer[100];
    // Ask the user to type a number
    printf("Whats' your name: \n");

    // Get and save the number the user types
    scanf("%s", answer);

    // Output the number the user typed
    printf("hello,  %s \n", answer);
}