#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;
node createNode(int data);


int main(void)
{
    node *node = NULL;
    printf("%i \n", createNode(1).number);
}

node createNode(int data)
{
    node *n = malloc(sizeof(node));

    if (n != NULL)
    {
        // initialize a number
        // (*n).number = data;
        //  or
        n->number = data;

        // initialze a node
        n->next = NULL;
    }
    return *n;
    free(n);
}