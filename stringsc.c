#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[] = {2, 3, 5, 6, 8};
    char *s = "hi!"; // this is the same like the string datatype but only stores the first element of memory address
    // string ss = "hi!";
    // char c = s[0]; // this will create a memory address
    // char *p = &s[0];
    // printf("%s \n", s);
    // printf("%p \n", s); // same address will given
    // printf("%p \n", p); // it will also give same addres of first element
    // printf("%p \n", &s[0]); // printing each charactor of element in the string
    // printf("%p \n", &s[1]); // printing each charactor of element in the string
    // printf("%p \n", &s[2]); // printing each charactor of element in the string
    // printf("%p \n", &s[3]); // printing each charactor of element in the string


    // printf("%c \n", ss[0]);
    // printf("%c \n", ss[1]);
    // printf("%c \n", ss[2]);
    // printf("%c \n", ss[3]);

    // now we use square braceket to get the values with index 
    // we are diving into deep how they access;

    // pointer arthmetic

    // printf("%c \n", *s); // --> s[0]
    // printf("%c \n", *(s + 1)); // --> s[1]
    // printf("%c \n", *(s + 2)); // --> s[2]

    printf("%i \n", numbers[0]);
    printf("%i \n", numbers[1]);
    printf("%i \n", numbers[2]);
    // both are same but above one use square bracket notations to access value
    // below one using address to get the values 
    printf("%i \n", *numbers);
    printf("%i \n", *(numbers + 1));
    printf("%i \n", *(numbers + 2));

    // int has 4 bytes, but we need add one to the address but
    // compiler takes adds plus one and compiler knows the data type
}