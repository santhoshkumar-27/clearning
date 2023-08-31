#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(void)
{
    // list of the size
    node *list = NULL;

    // initialize the node
    node *n = malloc(sizeof(node));

    if (n == NULL)
    {
        return 1;
    }

    // initialize a number to node and next
    // (*n).number = 1;
    //  or
    n->number = 1;
    // initialze a node
    (*n).next = NULL;
    // or
    // n->next = NULL;
    list = n;
    free(n);

    // add second number
    n = malloc(sizeof(node));

    if (n == NULL)
    {
        free(list);
        return 1;
    }
    n->number = 2;
    n->next = NULL;
    list->next = n;
    free(n);
    // add third number
    n = malloc(sizeof(node));

    if (n == NULL)
    {
        free(list->next);
        free(list); // you cant touch the memory after you freed
        return 1;
    }
    n->number = 3;
    n->next = NULL;
    list->next->next = n;
    free(n);


    for(node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i \n", tmp->number);
    }

    // freee up

    while (list != NULL)
    {
        // pointing second node
        node *tmp = list->next;
        // free up spaces
        free(list);
        // reassiging the second node of its first node
        list = tmp;
    }
    
    return 0;
}